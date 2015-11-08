#pragma once
class Matrix
{
private:
	float **matrix;
	signed int sizeM, sizeN;

public:
	Matrix(signed int,signed int);
	~Matrix();
	Matrix operator+(Matrix);
	signed int getN();
	signed int getM();
	float * operator[](signed int);

};

