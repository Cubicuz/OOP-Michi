#pragma once
class Iterator
{
private:
	IntVector * vec;
	unsigned int pos;
public:
	Iterator(IntVector *);
	~Iterator();
	int * next();
};

