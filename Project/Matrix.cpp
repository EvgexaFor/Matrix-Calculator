#include "Matrix.h"
#include <cmath>
#include <time.h>

 using namespace std;
 using namespace System::Windows::Forms;
 using namespace System;


void Matrix::SetSizeMTX1(int SIZE1)//Сеттер на матрицу 1
{
	size_matrix1 = SIZE1;
}

int Matrix::GetSizeMTX1()//Геттер на матрицу 1
{
	return size_matrix1;
}

void Matrix::SetSizeMTX2(int SIZE2)//Сеттер на матрицу 2
{ 
	size_matrix2 = SIZE2;
}

int Matrix::GetSizeMTX2()//Геттер на матрицу 2
{
	return size_matrix2;
}

void Matrix::SetMTXel(int i, int j, double El)//Cеттер на элемет матрицы
{
	MTX[i][j] = El;
}

double Matrix::GetMTXel(int i, int j) const//Геттер на элемет матрицы
{
	return MTX[i][j];
}

void Matrix::ResizeMTX(int m, int n)//Фунуция изменения массива MTX
{
	size_matrix1 = m;
	size_matrix2 = n;
	for (size_t i = 0; i < size_matrix1; i++)//Удаление старого массива
	{
		delete[]MTX[i];//Удаление массива MTX
	}
	delete[]MTX;//Удаление массива MTX

	MTX = nullptr;//Зануляем массив MTX

	MTX = new double* [m];//Создание динамического массива MTX
	for (int i = 0; i < m; i++) {
		MTX[i] = new double[n];//Создание динамического массива MTX
	}
}

void Matrix::Transpose()//Функция транспонирования матрицы
{
	double t;
	double** tmp = new double* [size_matrix2];// Создание динамического массива tmp

	for (int i = 0; i < size_matrix2; i++)
	{
		tmp[i] = new double[size_matrix1];//Создание динамического массива tmp
	}

	for (int i = 0; i < size_matrix1; i++) 
	{
		for (int j = 0; j < size_matrix2; j++) 
		{
			tmp[j][i] = MTX[i][j];//Присвоение индексам массива tmp значения индексов массива MTX
		}
	}
	for (size_t i = 0; i < size_matrix1; i++)
	{
		delete[]MTX[i];//Удаление массива MTX
	}
	delete[]MTX;//Удаление массива MTX
	MTX = tmp;//Заносим MTX в промежуточную переменную tmp
	int TP = size_matrix1;//Декларация и инициализация доп. промежуточной переменной TP значением size_matrix1
	size_matrix1 = size_matrix2;//Присвоение значению size_matrix1 значение size_matrix2
	size_matrix2 = TP;//Инициализация переменной TP значением size_matrix2
}

void Matrix::Randomize()//Функция рандомной инициализации массива
{
	int a = 1, b = 25;//Диапазон значений от 1 до 25
	srand(time(NULL));// Рандомизация рандома))
	for (int i = 0; i < size_matrix1; i++) {
		for (int j = 0; j < size_matrix2; j++) {
			MTX[i][j] = a + rand() % (b - a + 1);//Здесь действует формула a + rand() % (b - a + 1), а именно это и есть инициализация масиива случайными значениями
		}
	}
}

void Matrix::Obr_Matrix()//Функция для приведения к обратной матрице
{
	for (int i = 0; i < size_matrix1; i++)
	{
		for (int j = 0; j < size_matrix2; j++)
		{
			MTX[i][j] = pow(MTX[i][j], -1);//Присвоение текущей матрице её обратный вид
		}
	}
}

void Matrix::Plus_Matrix(const Matrix* mtx1)//Функция сложения матриц
{;

	if (size_matrix1 != mtx1->size_matrix1 || size_matrix2 != mtx1->size_matrix2)//Проверка на не совпадение по размеру
	{
		MessageBox::Show("Размеры матриц должны быть одинаковыми!", "Great Matrix", MessageBoxButtons::OK, MessageBoxIcon::Warning);//Вывод ошибки (предупреждения)
	}
	else
	{
		for (int i = 0; i < size_matrix1; i++)
		{
			for (int j = 0; j < size_matrix2; j++)
			{
				MTX[i][j] += mtx1->MTX[i][j];//Сложение матриц
			}
		}
	}
}

void Matrix::Minus_Matrix(const Matrix* mtx1)//Функция вычитания матриц
{

	if (size_matrix1 != mtx1->size_matrix1 || size_matrix2 != mtx1->size_matrix2)//Проверка на не совпадение по размеру
	{
		MessageBox::Show("Размеры матриц должны быть одинаковыми!", "Great Matrix", MessageBoxButtons::OK, MessageBoxIcon::Warning);//Вывод ошибки (предупреждения)
	}
	else {
		for (int i = 0; i < size_matrix1; i++)
		{
			for (int j = 0; j < size_matrix2; j++)
			{
				MTX[i][j] -= mtx1->MTX[i][j];//Вычитание матриц
			}
		}
	}
}

void Matrix::Umn_Matrix(const Matrix* mtx1)//Функция перемножения матриц
{
	if (size_matrix1 != mtx1->size_matrix2)//Проверка матриц на согласованность
	{
		MessageBox::Show("Матрицы должны быть согласоваными (кол-во столбцов первой\nматрицы должно быть равно кол-ву строк второй)!\n\nЛибо матрицы должны быть квадратными!", "Great Matrix", MessageBoxButtons::OK, MessageBoxIcon::Warning);
	}
	else if (size_matrix1 == mtx1->size_matrix1 && size_matrix2 == mtx1->size_matrix2)//Дополнительная проверка на согласованность
	{
		double** tmp = new double* [mtx1->size_matrix1];//Создание динамического массива tmp

		for (int i = 0; i < size_matrix1; i++)
		{
			tmp[i] = new double[size_matrix1];//Создание динамического массива tmp
		}

		for (int i = 0; i < size_matrix1; i++)
		{
			for (int j = 0; j < size_matrix1; j++)
			{
				tmp[i][j] = 0;//Зануляем tmp
				for (int k = 0; k < size_matrix1; k++)
				{
					double a = mtx1->MTX[i][k];//Присвоение переменной a индексов MTX[i][k]
					double b = MTX[k][j];//Присвоенике переменной b индесов MTX[k][j]
					tmp[i][j] += mtx1->MTX[i][k] * MTX[k][j];//Прибавление к tmp значений MTX[i][k] * MTX[k][j]
				}
			}
		}
		MTX = tmp;//Присвоение значений промежуточной переменной текущему массиву MTX
	}
	else {
		double** tmp = new double* [mtx1->size_matrix1];//Создание массива tmp

		size_matrix1 = mtx1->size_matrix1;//Присвоение значению size_matrix1 значеня mtx1->size_matirx1

		for (int i = 0; i < mtx1->size_matrix1; i++)
		{
			tmp[i] = new double[size_matrix2];//Создание динамического массива tmp
		}

		for (int i = 0; i < size_matrix1; i++) {
			for (int j = 0; j < size_matrix2; j++)
			{
				tmp[i][j] = 0;//Зануляем tmp
				for (int k = 0; k < mtx1->size_matrix2; k++)
				{
					tmp[i][j] += mtx1->MTX[i][k] * MTX[k][j];//Прибавление к tmp значений MTX[i][k] * MTX[k][j]
				}
			}
		}
		MTX = tmp;//Присвоение значений промежуточной переменной текущему массиву MTX
	}
}

void Matrix::Razd_Matrix(const Matrix* mtx1)//Функция деления матриц
{

	if (size_matrix1 != mtx1->size_matrix1 || size_matrix2 != mtx1->size_matrix2)//Проверка на не совпадение по размеру
	{
		MessageBox::Show("Размеры матриц должны быть одинаковыми!", "Great Matrix",MessageBoxButtons::OK, MessageBoxIcon::Warning);//Вывод ошибки (предупреждения)
	}
	for (int i = 0; i < size_matrix1; i++)
	{
		for (int j = 0; j < size_matrix2; j++)
		{
			MTX[i][j] /= mtx1->MTX[i][j];//Деление матриц
		}
	}
}

void Matrix::GetMatr(double** mas, double** p, int i, int j, int m)//Функция для проверки индексов массива
{
	int ki, kj, di, dj;
	di = 0;
	for (ki = 0; ki < m - 1; ki++) { // проверка индекса строки
		if (ki == i) di = 1;
		dj = 0;
		for (kj = 0; kj < m - 1; kj++) { // проверка индекса столбца
			if (kj == j) dj = 1;
			p[ki][kj] = mas[ki + di][kj + dj];
		}
	}
}

double Matrix::Determinant(double** mas, int m)//Функция нахождения определителя методом разложеняи по элементам первой строки
{
	int i, j, d, k, n;
	double** p;
	p = new double* [m];//Создание динамичесого массива р
	for (i = 0; i < m; i++)
		p[i] = new double[m];//Создание динамичесого массива р
	j = 0; d = 0;
	k = 1; //(-1) в степени i
	n = m - 1;
	if (m == 2) {//Проверка на размерность если больше чем 2 на 2
		d = mas[0][0] * mas[1][1] - (mas[1][0] * mas[0][1]);
		return(d);
	}
	if (m > 2) {
		for (i = 0; i < m; i++) {
			GetMatr(mas, p, i, 0, m);


			d = d + k * mas[i][0] * Determinant(p, n);//Рекурсивный вызов функции
			k = -k;
		}
	}
	return(d);
}

double Matrix::Opredelitel()//Функция нахождения определителя
{

	if (size_matrix1 == 1 && size_matrix2 == 1)//Проверка на размерность, если = 1
	{
		double x = MTX[0][0];//Декларация и инициализация переменной x элементом массива с индексами [0][0]
		MessageBox::Show(Convert::ToString(x), "Определитель матрицы равен: ");//Вывод определителя
	}
	else
		if (size_matrix1 == 2 && size_matrix2 == 2)//Проверка на размерность, если = 2
		{
			double x;//Декларация переменной x
			for (int i = 0; i < 2; i++)
			{
				for (int j = 0; j < 2; j++)
				{
					x = MTX[0][0] * MTX[1][1] - MTX[1][0] * MTX[0][1];//Расчёт определителя путём вычитания из главной диагонали побочной
				}
			}
			MessageBox::Show(Convert::ToString(x), "Определитель матрицы равен: ");//Вывод определителя
		}
		else
			if (size_matrix1 == 3 && size_matrix2 == 3)// Проверка на размерность, если = 3
			{
				double d2 = 0.00, x = 0;//Декларация переменных d2 и x, c последующей из инициализацией значениями 0
				for (int i = 0; i < 3; i++)
				{
					for (int j = 0; j < 3; j++)
					{
						if (j == i) continue;//Если j = i продолжить
						int g = 3 - i - j;
						x = MTX[0][i] * MTX[1][j] * MTX[2][g];
						x *= ((i - j) * (j - g) * (g - i) > 0) ? 1 : -1;
						d2 += x;
					}
				}
				// Более простая реализация данного алгоритма, показалась мне не серьёзной. Поэтому решил усложнить и сделать через циклы, что вы видите выше!
				///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
				// double m = MTX[0][0] * MTX[1][1] * MTX[2][2] + MTX[1][0] * MTX[0][2] * MTX[2][1] + MTX[0][1] * MTX[1][2] * MTX[2][0] - MTX[2][0] * MTX[1][1] * MTX[0][2] - MTX[0][1] * MTX[1][0] * MTX[2][2] - MTX[0][0] * MTX[1][2] * MTX[2][1];
				MessageBox::Show(Convert::ToString(d2), "Определитель матрицы равен: ");//Вывод определителя
			}
			else
				if (size_matrix1 == 4 && size_matrix2 == 4)// Проверка на размерность, если = 4
				{
					// Разложение по элементам первой строки
					MessageBox::Show(Convert::ToString(Determinant(MTX, size_matrix1)), "Определитель матрицы равен: ");//Вывод определителя
				}
				else
					if (size_matrix1 == 5 && size_matrix2 == 5)// Проверка на размерность, если = 5
					{
						// Возникла сложность с реализацией алгоритма (Временно отсутствует!)
						MessageBox::Show(Convert::ToString(Determinant(MTX, size_matrix1)), "Определитель матрицы равен: ");//Вывод определителя
					}
					else
					{
						MessageBox::Show("Невозможно вычислить определитель у НЕ квадратной матрицы!","Great Matrix", MessageBoxButtons::OK, MessageBoxIcon::Warning);//Вывод ошибки
						return 0;
					}
}