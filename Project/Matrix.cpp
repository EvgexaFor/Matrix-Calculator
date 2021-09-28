#include "Matrix.h"
#include <cmath>
#include <time.h>

 using namespace std;
 using namespace System::Windows::Forms;
 using namespace System;


void Matrix::SetSizeMTX1(int SIZE1)//������ �� ������� 1
{
	size_matrix1 = SIZE1;
}

int Matrix::GetSizeMTX1()//������ �� ������� 1
{
	return size_matrix1;
}

void Matrix::SetSizeMTX2(int SIZE2)//������ �� ������� 2
{ 
	size_matrix2 = SIZE2;
}

int Matrix::GetSizeMTX2()//������ �� ������� 2
{
	return size_matrix2;
}

void Matrix::SetMTXel(int i, int j, double El)//C����� �� ������ �������
{
	MTX[i][j] = El;
}

double Matrix::GetMTXel(int i, int j) const//������ �� ������ �������
{
	return MTX[i][j];
}

void Matrix::ResizeMTX(int m, int n)//������� ��������� ������� MTX
{
	size_matrix1 = m;
	size_matrix2 = n;
	for (size_t i = 0; i < size_matrix1; i++)//�������� ������� �������
	{
		delete[]MTX[i];//�������� ������� MTX
	}
	delete[]MTX;//�������� ������� MTX

	MTX = nullptr;//�������� ������ MTX

	MTX = new double* [m];//�������� ������������� ������� MTX
	for (int i = 0; i < m; i++) {
		MTX[i] = new double[n];//�������� ������������� ������� MTX
	}
}

void Matrix::Transpose()//������� ���������������� �������
{
	double t;
	double** tmp = new double* [size_matrix2];// �������� ������������� ������� tmp

	for (int i = 0; i < size_matrix2; i++)
	{
		tmp[i] = new double[size_matrix1];//�������� ������������� ������� tmp
	}

	for (int i = 0; i < size_matrix1; i++) 
	{
		for (int j = 0; j < size_matrix2; j++) 
		{
			tmp[j][i] = MTX[i][j];//���������� �������� ������� tmp �������� �������� ������� MTX
		}
	}
	for (size_t i = 0; i < size_matrix1; i++)
	{
		delete[]MTX[i];//�������� ������� MTX
	}
	delete[]MTX;//�������� ������� MTX
	MTX = tmp;//������� MTX � ������������� ���������� tmp
	int TP = size_matrix1;//���������� � ������������� ���. ������������� ���������� TP ��������� size_matrix1
	size_matrix1 = size_matrix2;//���������� �������� size_matrix1 �������� size_matrix2
	size_matrix2 = TP;//������������� ���������� TP ��������� size_matrix2
}

void Matrix::Randomize()//������� ��������� ������������� �������
{
	int a = 1, b = 25;//�������� �������� �� 1 �� 25
	srand(time(NULL));// ������������ �������))
	for (int i = 0; i < size_matrix1; i++) {
		for (int j = 0; j < size_matrix2; j++) {
			MTX[i][j] = a + rand() % (b - a + 1);//����� ��������� ������� a + rand() % (b - a + 1), � ������ ��� � ���� ������������� ������� ���������� ����������
		}
	}
}

void Matrix::Obr_Matrix()//������� ��� ���������� � �������� �������
{
	for (int i = 0; i < size_matrix1; i++)
	{
		for (int j = 0; j < size_matrix2; j++)
		{
			MTX[i][j] = pow(MTX[i][j], -1);//���������� ������� ������� � �������� ���
		}
	}
}

void Matrix::Plus_Matrix(const Matrix* mtx1)//������� �������� ������
{;

	if (size_matrix1 != mtx1->size_matrix1 || size_matrix2 != mtx1->size_matrix2)//�������� �� �� ���������� �� �������
	{
		MessageBox::Show("������� ������ ������ ���� �����������!", "Great Matrix", MessageBoxButtons::OK, MessageBoxIcon::Warning);//����� ������ (��������������)
	}
	else
	{
		for (int i = 0; i < size_matrix1; i++)
		{
			for (int j = 0; j < size_matrix2; j++)
			{
				MTX[i][j] += mtx1->MTX[i][j];//�������� ������
			}
		}
	}
}

void Matrix::Minus_Matrix(const Matrix* mtx1)//������� ��������� ������
{

	if (size_matrix1 != mtx1->size_matrix1 || size_matrix2 != mtx1->size_matrix2)//�������� �� �� ���������� �� �������
	{
		MessageBox::Show("������� ������ ������ ���� �����������!", "Great Matrix", MessageBoxButtons::OK, MessageBoxIcon::Warning);//����� ������ (��������������)
	}
	else {
		for (int i = 0; i < size_matrix1; i++)
		{
			for (int j = 0; j < size_matrix2; j++)
			{
				MTX[i][j] -= mtx1->MTX[i][j];//��������� ������
			}
		}
	}
}

void Matrix::Umn_Matrix(const Matrix* mtx1)//������� ������������ ������
{
	if (size_matrix1 != mtx1->size_matrix2)//�������� ������ �� ���������������
	{
		MessageBox::Show("������� ������ ���� ������������� (���-�� �������� ������\n������� ������ ���� ����� ���-�� ����� ������)!\n\n���� ������� ������ ���� �����������!", "Great Matrix", MessageBoxButtons::OK, MessageBoxIcon::Warning);
	}
	else if (size_matrix1 == mtx1->size_matrix1 && size_matrix2 == mtx1->size_matrix2)//�������������� �������� �� ���������������
	{
		double** tmp = new double* [mtx1->size_matrix1];//�������� ������������� ������� tmp

		for (int i = 0; i < size_matrix1; i++)
		{
			tmp[i] = new double[size_matrix1];//�������� ������������� ������� tmp
		}

		for (int i = 0; i < size_matrix1; i++)
		{
			for (int j = 0; j < size_matrix1; j++)
			{
				tmp[i][j] = 0;//�������� tmp
				for (int k = 0; k < size_matrix1; k++)
				{
					double a = mtx1->MTX[i][k];//���������� ���������� a �������� MTX[i][k]
					double b = MTX[k][j];//����������� ���������� b ������� MTX[k][j]
					tmp[i][j] += mtx1->MTX[i][k] * MTX[k][j];//����������� � tmp �������� MTX[i][k] * MTX[k][j]
				}
			}
		}
		MTX = tmp;//���������� �������� ������������� ���������� �������� ������� MTX
	}
	else {
		double** tmp = new double* [mtx1->size_matrix1];//�������� ������� tmp

		size_matrix1 = mtx1->size_matrix1;//���������� �������� size_matrix1 ������� mtx1->size_matirx1

		for (int i = 0; i < mtx1->size_matrix1; i++)
		{
			tmp[i] = new double[size_matrix2];//�������� ������������� ������� tmp
		}

		for (int i = 0; i < size_matrix1; i++) {
			for (int j = 0; j < size_matrix2; j++)
			{
				tmp[i][j] = 0;//�������� tmp
				for (int k = 0; k < mtx1->size_matrix2; k++)
				{
					tmp[i][j] += mtx1->MTX[i][k] * MTX[k][j];//����������� � tmp �������� MTX[i][k] * MTX[k][j]
				}
			}
		}
		MTX = tmp;//���������� �������� ������������� ���������� �������� ������� MTX
	}
}

void Matrix::Razd_Matrix(const Matrix* mtx1)//������� ������� ������
{

	if (size_matrix1 != mtx1->size_matrix1 || size_matrix2 != mtx1->size_matrix2)//�������� �� �� ���������� �� �������
	{
		MessageBox::Show("������� ������ ������ ���� �����������!", "Great Matrix",MessageBoxButtons::OK, MessageBoxIcon::Warning);//����� ������ (��������������)
	}
	for (int i = 0; i < size_matrix1; i++)
	{
		for (int j = 0; j < size_matrix2; j++)
		{
			MTX[i][j] /= mtx1->MTX[i][j];//������� ������
		}
	}
}

void Matrix::GetMatr(double** mas, double** p, int i, int j, int m)//������� ��� �������� �������� �������
{
	int ki, kj, di, dj;
	di = 0;
	for (ki = 0; ki < m - 1; ki++) { // �������� ������� ������
		if (ki == i) di = 1;
		dj = 0;
		for (kj = 0; kj < m - 1; kj++) { // �������� ������� �������
			if (kj == j) dj = 1;
			p[ki][kj] = mas[ki + di][kj + dj];
		}
	}
}

double Matrix::Determinant(double** mas, int m)//������� ���������� ������������ ������� ���������� �� ��������� ������ ������
{
	int i, j, d, k, n;
	double** p;
	p = new double* [m];//�������� ������������ ������� �
	for (i = 0; i < m; i++)
		p[i] = new double[m];//�������� ������������ ������� �
	j = 0; d = 0;
	k = 1; //(-1) � ������� i
	n = m - 1;
	if (m == 2) {//�������� �� ����������� ���� ������ ��� 2 �� 2
		d = mas[0][0] * mas[1][1] - (mas[1][0] * mas[0][1]);
		return(d);
	}
	if (m > 2) {
		for (i = 0; i < m; i++) {
			GetMatr(mas, p, i, 0, m);


			d = d + k * mas[i][0] * Determinant(p, n);//����������� ����� �������
			k = -k;
		}
	}
	return(d);
}

double Matrix::Opredelitel()//������� ���������� ������������
{

	if (size_matrix1 == 1 && size_matrix2 == 1)//�������� �� �����������, ���� = 1
	{
		double x = MTX[0][0];//���������� � ������������� ���������� x ��������� ������� � ��������� [0][0]
		MessageBox::Show(Convert::ToString(x), "������������ ������� �����: ");//����� ������������
	}
	else
		if (size_matrix1 == 2 && size_matrix2 == 2)//�������� �� �����������, ���� = 2
		{
			double x;//���������� ���������� x
			for (int i = 0; i < 2; i++)
			{
				for (int j = 0; j < 2; j++)
				{
					x = MTX[0][0] * MTX[1][1] - MTX[1][0] * MTX[0][1];//������ ������������ ���� ��������� �� ������� ��������� ��������
				}
			}
			MessageBox::Show(Convert::ToString(x), "������������ ������� �����: ");//����� ������������
		}
		else
			if (size_matrix1 == 3 && size_matrix2 == 3)// �������� �� �����������, ���� = 3
			{
				double d2 = 0.00, x = 0;//���������� ���������� d2 � x, c ����������� �� �������������� ���������� 0
				for (int i = 0; i < 3; i++)
				{
					for (int j = 0; j < 3; j++)
					{
						if (j == i) continue;//���� j = i ����������
						int g = 3 - i - j;
						x = MTX[0][i] * MTX[1][j] * MTX[2][g];
						x *= ((i - j) * (j - g) * (g - i) > 0) ? 1 : -1;
						d2 += x;
					}
				}
				// ����� ������� ���������� ������� ���������, ���������� ��� �� ���������. ������� ����� ��������� � ������� ����� �����, ��� �� ������ ����!
				///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
				// double m = MTX[0][0] * MTX[1][1] * MTX[2][2] + MTX[1][0] * MTX[0][2] * MTX[2][1] + MTX[0][1] * MTX[1][2] * MTX[2][0] - MTX[2][0] * MTX[1][1] * MTX[0][2] - MTX[0][1] * MTX[1][0] * MTX[2][2] - MTX[0][0] * MTX[1][2] * MTX[2][1];
				MessageBox::Show(Convert::ToString(d2), "������������ ������� �����: ");//����� ������������
			}
			else
				if (size_matrix1 == 4 && size_matrix2 == 4)// �������� �� �����������, ���� = 4
				{
					// ���������� �� ��������� ������ ������
					MessageBox::Show(Convert::ToString(Determinant(MTX, size_matrix1)), "������������ ������� �����: ");//����� ������������
				}
				else
					if (size_matrix1 == 5 && size_matrix2 == 5)// �������� �� �����������, ���� = 5
					{
						// �������� ��������� � ����������� ��������� (�������� �����������!)
						MessageBox::Show(Convert::ToString(Determinant(MTX, size_matrix1)), "������������ ������� �����: ");//����� ������������
					}
					else
					{
						MessageBox::Show("���������� ��������� ������������ � �� ���������� �������!","Great Matrix", MessageBoxButtons::OK, MessageBoxIcon::Warning);//����� ������
						return 0;
					}
}