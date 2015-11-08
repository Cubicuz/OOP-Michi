#include "Iterator.h"
#include "IntVector.h"




Iterator::Iterator(IntVector * veci) : vec(veci)
{

}

Iterator::~Iterator()
{
}

int * Iterator::next()
{
	if (iteratorPos < vec->length) {
		iteratorPos++;
		return vec->ar + iteratorPos - 1;
	}
	return nullptr;
}
