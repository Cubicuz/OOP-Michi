#include "IntVector.h"
#include "Iterator.h"
#include <iostream>


Iterator::Iterator(IntVector * i) : pos(0),vec(i)
{
}


Iterator::~Iterator()
{
}

int * Iterator::next()
{
	if (pos < vec->len) {
		pos++;
		return (vec->vec + pos - 1);
	}
	return nullptr;
}
