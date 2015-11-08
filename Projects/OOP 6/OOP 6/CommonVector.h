#pragma once
template <class T, unsigned len>
class CommonVector
{
private:
	unsigned length;
	T *elements;
public:
	CommonVector() :length(len) { elements = new T[len]; };
	~CommonVector() { delete[] elements; };
	unsigned size() const { return length; };
	T& operator[] (unsigned i) {
		if (i < len) {
			return elements[i];
		}
		exit(1);
	}
};

