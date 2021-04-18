#include <cstdlib>
#include "FillRand.h"

void FillRand(double* arr, int size)
{
	for (int i = 0; i < size; arr[i] = rand() / 1e2, i++);
}
void FillRand(double**& arr, int rows, int cols)
{
	for (int i = 0; i < rows; FillRand(arr[i], cols), i++);
}

