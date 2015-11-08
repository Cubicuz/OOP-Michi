#pragma once

class Iterator
{
private:
	unsigned int iteratorPos;
	IntVector * vec;

public:
	Iterator(IntVector *);
	~Iterator();
	int * next();
};

