#pragma once

void FillRand(double* arr, int size);
void FillRand(double**& arr, int rows, int cols);


template<typename T> void FillRand(T* arr, int size)
{
	for (int i = 0; i < size; arr[i] = rand() % 50, i++);
}
template<typename T> void FillRand(T**& arr, int rows, int cols)
{
	for (int i = 0; i < rows; FillRand(arr[i], cols), i++);
}

