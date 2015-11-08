#pragma once
template<class T>
class Sort
{
public:
	void swapIt(&T, &T);
	void quickSort(unsigned left, unsigned right, T* data);

};

template<class T>
inline void Sort<T>::quickSort(unsigned left, unsigned right, T* data)
{
	if (left < right) {
		unsigned li = left - 1, re = right, pivot = right;
		for (;;) {
			while (data[++li] < data[pivot]);
			while (li < re && data[pivot] < data[--re]);
			if (li >= re)
				break;
			
		}
	}
}
