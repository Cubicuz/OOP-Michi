#include "Matrix.h"





Matrix::Matrix(signed int M,signed int N)
{
	float *m = new float[M*N];
	matrix = &m;
	sizeM = M;
	sizeN = N;
}

Matrix::~Matrix()
{
	delete matrix;
}

Matrix Matrix::operator+(Matrix b)
{
	if (sizeM != b.sizeM)
		return Matrix (0,0);
	if (sizeN != b.sizeN)
		return Matrix (0,0);
	Matrix m(sizeM, sizeN);
	for (int i = 0;i < sizeM;i++) {
		for (int j = 0;j < sizeN;i++) {

		}
	}
	return m;
}

signed int Matrix::getN()
{
	return sizeN;
}

signed int Matrix::getM()
{
	return sizeM;
}

float * Matrix::operator[](signed int M)
{
	return (*matrix)+M*sizeM;
}
