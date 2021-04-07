#pragma once
#include <iostream>
using namespace std;

template<typename T> void push_front(T*& arr, int size, int quant)
{
	T* buffer = new T[size + quant]{};
	for (int i = 0; i < size; i++) {

		buffer[i + quant] = arr[i];
	}
	delete[] arr;
	arr = buffer;
}
template<typename T> void push_back(T*& arr, int size, int quant)
{
	T* buffer = new T[size + quant]{};
	for (int i = 0; i < size; i++) {

		buffer[i] = arr[i];
	}
	delete[] arr;
	arr = buffer;
}
template<typename T> void insert(T*& arr, int size, int index, int quant)
{
	T* buffer = new T[size + quant]{};
	for (int i = 0; i < size + quant; i++) {

		if (i < index) {
			buffer[i] = arr[i];
		}
		if (i >= index && i < index + quant) {
			continue;
		}
		if (i >= index + quant) {
			buffer[i] = arr[i - quant];
		}
	}
	delete[] arr;
	arr = buffer;
}

template<typename T> void pop_back(T*& arr, int size, int quant)
{
	T* buffer = new T[size - quant]{};
	for (int i = 0; i < size - quant; i++) {

		buffer[i] = arr[i];
	}
	delete[] arr;
	arr = buffer;
}
template<typename T> void pop_front(T*& arr, int size, int quant)
{
	T* buffer = new T[size - quant]{};
	for (int i = 0; i < size - quant; i++) {

		buffer[i] = arr[i + quant];
	}
	delete[] arr;
	arr = buffer;
}
template<typename T> void erase(T*& arr, int size, int index, int quant)
{
	T* buffer = new T[size - quant]{};
	for (int i = 0; i < size; i++) {

		if (i < index) {
			buffer[i] = arr[i];
		}
		if (i >= index && i < index + quant) {
			continue;
		}
		if (i >= index + quant) {
			buffer[i - quant] = arr[i];
		}
	}
	delete[] arr;
	arr = buffer;
}


template<typename T> void push_front(T**& arr, int& rows, int& cols, int quant_r, int quant_c)
{
	if (quant_r > 0) {
		push_front(arr, rows, quant_r);
		for (int i = 0; i < quant_r; i++) {
           arr[i] = new T[cols]{};
		}
		rows += quant_r;
	}
	if (quant_c > 0) {
		for (int i = 0; i < rows; i++) {
			push_front(arr[i], cols, quant_c);
		}
		cols += quant_c;
	}
}
template<typename T> void push_back(T**& arr, int& rows, int& cols, int quant_r, int quant_c)
{
	if (quant_r > 0) {
		push_back(arr, rows, quant_r);
		for (int i = rows; i < rows + quant_r; i++) {
              arr[i] = new T[cols]{};
		}
		rows += quant_r;
	}
	if (quant_c > 0) {
		for (int i = 0; i < rows; i++) {
			push_back(arr[i], cols, quant_c);
		}
		cols += quant_c;
	}
}
template<typename T> void insert(T**& arr, int& rows, int& cols, int index_r, int index_c, int quant_r, int quant_c)
{
	if (quant_r > 0) {
		insert(arr, rows, index_r, quant_r);
		for (int i = index_r; i < index_r + quant_r; i++) {
               arr[i] = new T[cols]{};
		}
		rows +=quant_r;
	}
	if (quant_c > 0) {
		for (int i = 0; i < rows; i++) {
			insert(arr[i], cols, index_c, quant_c);
		}
		cols +=quant_c;
	}
}

template<typename T> void pop_front(T**& arr, int& rows, int& cols, int quant_r, int quant_c)
{
	if (quant_r > 0) {
		pop_front(arr, rows, quant_r);
		rows -= quant_r;
	}
	if (quant_c > 0) {
		for (int i = 0; i < rows; i++) {
			pop_front(arr[i], cols, quant_c);
		}
		cols -= quant_c;
	}
}
template<typename T> void pop_back(T**& arr, int& rows, int& cols, int quant_r, int quant_c)
{
	if (quant_r > 0) {
		pop_back(arr, rows, quant_r);
		rows -= quant_r;
	}
	if (quant_c > 0) {
		for (int i = 0; i < rows; i++) {
			pop_back(arr[i], cols, quant_c);
		}
		cols -= quant_c;
	}
}
template<typename T> void erase(T**& arr, int& rows, int& cols, int index_r, int index_c, int quant_r, int quant_c)
{
	if (quant_r > 0) {
		erase(arr, rows, index_r, quant_r);
		rows -= quant_r;
	}
	if (quant_c > 0) {
		for (int i = 0; i < rows; i++) {
			erase(arr[i], cols, index_c, quant_c);
		}
		cols -= quant_c;
	}
}


