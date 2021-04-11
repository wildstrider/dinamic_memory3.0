#pragma once
#define tab "\t"
template<typename T> void Print(T* arr, int size)
{
	for (int i = 0; i < size; cout << arr[i] << tab, i++);
	cout << endl;
}
template<typename T> void Print(T**& arr, int rows, int cols)
{
	for (int i = 0; i < rows; i++) {
		Print(arr[i], cols);
	}
	cout << endl;
}