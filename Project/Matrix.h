#pragma once
class Matrix
{
	double** MTX;
	int size_matrix1 = 5;
	int size_matrix2 = 5;
public: 
	Matrix() {//���������� ��� ����������
		MTX = new double* [size_matrix1];//�������� ������������� ������� MTX
		for (int i = 0; i < size_matrix1; i++) {
			MTX[i] = new double[size_matrix2];//�������� ������������� ������� MTX
		}
		for (int i = 0; i < size_matrix1; i++) {
			for (int j = 0; j < size_matrix2; j++) {
				MTX[i][j] = 0;//��������� MTX
			}
		}
	};
	Matrix(int m, int n) {//����������� � �����������
		size_matrix1 = m;
		size_matrix2 = n;
		MTX = new double* [size_matrix1];//�������� ������������� ������� MTX
		for (int i = 0; i < size_matrix1; i++) {
			MTX[i] = new double[size_matrix2];//�������� ������������� ������� MTX
		}
		for (int i = 0; i < size_matrix1; i++) {
			for (int j = 0; j < size_matrix2; j++) {
				MTX[i][j] = 0;//��������� MTX
			}
		}
	}
	~Matrix() {
		for (size_t i = 0; i < size_matrix1; i++)
		{
			delete[]MTX[i];//�������� ������� MTX
		}
		delete[]MTX;//�������� ������� MTX
	};
	void SetSizeMTX1(int);
	int GetSizeMTX1();
	void SetSizeMTX2(int);
	int GetSizeMTX2();
	void SetMTXel(int, int, double);
	double GetMTXel(int, int) const;
	void ResizeMTX(int, int);
	void Transpose();
	void Randomize();
	void Obr_Matrix();
	void Plus_Matrix(const Matrix*);
	void Minus_Matrix(const Matrix*);
	void Umn_Matrix(const Matrix*);
	void Razd_Matrix(const Matrix*);
	double Opredelitel();
	void GetMatr(double**, double**, int, int, int);
	double Determinant(double**, int);
};