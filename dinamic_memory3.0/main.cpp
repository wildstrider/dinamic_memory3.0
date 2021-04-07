#include <iostream>
#include "menu.h"
using namespace std;
#define tab "\t"

template<typename T> void FillRand(T* arr, int size);
template<typename T> void Print(T* arr, int size);

template<typename T> void Allocate(T**& arr, int rows, int cols);
template<typename T> void FillRand(T**& arr, int rows, int cols);
template<typename T> void Print(T**& arr, int rows, int cols);
template<typename T> void Clear(T**& arr, int rows);

int main()
{
	setlocale(LC_ALL, "ru");
	cout << "1 - Работать с одномерным массивом." << endl;
	cout << "2 - Работать с двумерным массивом." << endl;
	cout << "3 - Выход." << endl;
	int* arr; int size;
	int m; cin >> m;
	switch (m)
	{
	case 1:
		cout << "Введите размер массива: "; cin >> size; arr = new int[size];
		FillRand(arr, size);
		Print(arr, size);
		Menu(arr, size);
		Print(arr, size);
		delete[] arr;
		main();
		break;
	case 3:
		return 0;
		break;
	default:
		break;
	}
	
	cout << "Введите количество строк: "; int rows; cin >> rows;
	cout << "Введите количество колонок: "; int cols; cin >> cols;
	int** arr_int = nullptr;
	double** arr_double = nullptr;
	cout << "Выберите с каким типом данных работать." << endl;
	cout << "1 - int" << endl;
	cout << "2 - double" << endl;
	int type; cin >> type;
	switch (type)
	{
	case 1:
        Allocate(arr_int, rows, cols); 
	    FillRand(arr_int, rows, cols);
	    Print(arr_int, rows, cols); 
	    Menu(arr_int, rows, cols);
	    Print(arr_int, rows, cols); 
	    Clear(arr_int, rows);
		break;
	case 2:
		Allocate(arr_double, rows, cols);
		FillRand(arr_double, rows, cols);
		Print(arr_double, rows, cols);
		Menu(arr_double, rows, cols);
		Print(arr_double, rows, cols);
		Clear(arr_double, rows);
	}

	cout << "1 - повторить(0 - выход)" << endl;
	int rep; cin >> rep;
	switch (rep)
	{
	case 1:
		main();
		break;
	case 0:
		return 0;
	}
}

template<typename T> void FillRand(T* arr, int size) 
{
	for (int i = 0; i < size; i++) {
		arr[i] = rand() % 50;
	}
}
template<typename T> void Print(T* arr, int size)
{
	for (int i = 0; i < size; i++) {
		cout << arr[i] << tab;
    }
	cout << endl;
}

template<typename T> void Allocate(T**& new_arr, int rows, int cols)
{
	T** arr = new T * [rows];
	for (int i = 0; i < rows; i++) {

		arr[i] = new T[cols];
	}
	new_arr = arr;
}
template<typename T> void FillRand(T**& arr, int rows, int cols)
{
	for (int i = 0; i < rows; i++) {

		for (int j = 0; j < cols; j++) {

			if (sizeof(T) == 8) {
				arr[i][j] = rand() / 10E2;
			}
			else
				arr[i][j] = rand() % 255;
		}
	}
}
template<typename T> void Print(T**& arr, int rows, int cols)
{
	for (int i = 0; i < rows; i++) {

		for (int j = 0; j < cols; j++) {
			cout << arr[i][j] << tab;
		}
		cout << endl;
	}
	cout << endl;
}
template<typename T> void Clear(T**& arr, int rows)
{
	for (int i = 0; i < rows; i++) {

		delete[] arr[i];
	}

	delete[] arr;
}