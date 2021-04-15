#include <iostream>

template<typename T> void FillRand(T* arr, int size)
{
	for (int i = 0; i < size; i++) {
		if (sizeof T == 8) {
			arr[i] = rand() / 1e2;
		}
		else
			arr[i] = rand() % 50;
	}
}

template<typename T> void FillRand(T**& arr, int rows, int cols)
{
	for (int i = 0; i < rows; i++) {
		FillRand(arr[i], cols);
	}
}