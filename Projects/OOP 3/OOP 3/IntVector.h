#pragma once
class IntVector
{
friend class Iterator;
private:
	int *vec;
	unsigned int len;
public:
	IntVector(unsigned int);
	IntVector(const IntVector &);
	~IntVector();
	unsigned int size();
	int& operator[](unsigned int i);
	IntVector& operator=(const IntVector);
	void out();

};

