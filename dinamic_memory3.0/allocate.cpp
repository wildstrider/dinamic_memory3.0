#include "allocate.h"

template<typename T> void Allocate(T**& new_arr, int& rows, int& cols)
{
	T** arr = new T * [rows];
	for (int i = 0; i < rows; arr[i] = new T[cols], i++);
	new_arr = arr;
}
