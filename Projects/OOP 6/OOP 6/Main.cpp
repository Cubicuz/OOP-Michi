#include "CommonVector.h"
#include <iostream>
#include <stdlib.h>
#include "Sort.h"
#include <thread>
#include <windows.h>

unsigned int nthreads = std::thread::hardware_concurrency();
unsigned int runningThreads = 0;

using namespace std;

template<typename T>
static void quickSort(unsigned left, unsigned right, T* data) {
	if (left < right) {
		unsigned li = left - 1, re = right, pivot = right;
		for (;;) {
			while (data[++li] < data[pivot]);
			while (li < re && data[pivot] < data[--re]);
			if (li >= re)
				break;
			swap(data[li], data[re]); // Vertauschung
		}
		swap(data[li], data[pivot]); // Positionieren des Pivotelements

		if (left < li - 1)
			quickSort(left, li - 1, data);
		if (re + 1 < right)
			quickSort(re + 1, right, data);
	};
};

template<typename T>
static void iterativeQuickSort(int li, int re, T * data) {
	if (re <= li)
		return;
	if (re-li < 8) {
		iterativeInsertionSort(li, re, data);
		return;
	}
	int * stack = new int [2*(re - li + 1)];
	int top = -1;
	int pivot, l;
	stack[++top] = li;
	stack[++top] = re;
	while (top >= 0) {
		pivot = stack[top--];
		li = stack[top--];
		l = li - 1;
		re = pivot;
		while (true) {
			while (data[++l] < data[pivot]);
			while (l < re && data[pivot] < data[--re]);
			if (l >= re)
				break;
			swap(data[l], data[re]); // Vertauschen
		}
		swap(data[l], data[pivot]);
		if (li < l - 1) {
			if (li > l - 8) {
				iterativeInsertionSort(li, l - 1, data);
			} else {
				stack[++top] = li;
				stack[++top] = l - 1;
			}
		}
		if (re + 1 < pivot) {
			if (re + 8 > pivot) {
				iterativeInsertionSort(re + 1, pivot, data);
			} else {
				stack[++top] = re + 1;
				stack[++top] = pivot;
			}
		}
	}
	delete[] stack;
}

template<typename T>
static void threadedQuickSort(unsigned l, unsigned r, T* data) {
	if (re <= li)
		return;
	if (re - li < 8) {
		iterativeInsertionSort(li, re, data);
		return;
	}
	int * stack = new int[2 * (re - li + 1)];
	int top = -1;
	int pivot, l;
	stack[++top] = li;
	stack[++top] = re;
	while (top >= 0) {
		pivot = stack[top--];
		li = stack[top--];
		l = li - 1;
		re = pivot;
		while (true) {
			while (data[++l] < data[pivot]);
			while (l < re && data[pivot] < data[--re]);
			if (l >= re)
				break;
			swap(data[l], data[re]); // Vertauschen
		}
		swap(data[l], data[pivot]);
		if (li < l - 1) {
			if (li > l - 8) {
				iterativeInsertionSort(li, l - 1, data);
			}
			else {
				if (runningThreads < 8) {

				}
				else {
					stack[++top] = li;
					stack[++top] = l - 1;
				}
			}
		}
		if (re + 1 < pivot) {
			if (re + 8 > pivot) {
				iterativeInsertionSort(re + 1, pivot, data);
			}
			else {
				if (runningThreads < 8) {

				}
				else {
					stack[++top] = re + 1;
					stack[++top] = pivot;
				}
			}
		}
	}
	delete[] stack;
}

template<typename T>
static void iterativeInsertionSort(unsigned l, unsigned r, T* data) {
	for (unsigned i = l + 1;i <= r;i++) {
		T hold = data[i];
		unsigned j = i;
		while (j > l && data[j - 1] > hold) {
			data[j] = data[j - 1];
			j--;
		}
		data[j] = hold;
	}
}

int main() {
	int test = 0;
	int const numberOfElements = 50;
	int  v[numberOfElements];
	for (int i = 0;i < numberOfElements;i++) {
		cout << i << "	:" << v[i] << endl;
		v[i] = rand();
	}
	cout << endl;
	iterativeQuickSort(0, numberOfElements-1, v);
	for (int i = 0;i < numberOfElements-1;i++) {
		if (v[i] > v[i+1])
			test = 1;
	}
	
	for (int i = 0;i < numberOfElements;i++) {
		cout << i << "	:" << v[i] << endl;
	}
	cout << endl << test << endl;
	return 0;
}