#include "Print.h"
#include <iostream>
using namespace std;
#define tab "\t"

template<typename T> void Print(T* arr, int size)
{
	for (int i = 0; i < size; cout << arr[i] << tab, i++);
	cout << endl;
}

template<typename T> void Print(T**& arr, int rows, int cols)
{
	for (int i = 0; i < rows; Print(arr[i], cols), i++); 
	cout << endl;
}