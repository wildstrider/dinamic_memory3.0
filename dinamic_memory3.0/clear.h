#pragma once

template<typename T> void Clear(T**& arr, int rows)
{
	for (int i = 0; i < rows; delete[] arr[i], i++);
	delete[] arr;
}