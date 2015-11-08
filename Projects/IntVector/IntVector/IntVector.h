#pragma once
class IntVector
{
friend class Iterator;
private:
	int * ar;
	unsigned int length;
public:
	IntVector(unsigned int i);
	~IntVector();
	unsigned int size();
	int & at(unsigned int);
	void out();
};

