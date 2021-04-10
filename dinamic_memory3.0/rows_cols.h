#pragma once
#include <iostream>
using namespace std;

template<typename T> void push_front(T*& arr, int size, int quant)
{
	T* buffer = new T[size + quant]{};
	for (int i = 0; i < size; buffer[i + quant] = arr[i], i++);
	delete[] arr;
	arr = buffer;
}
template<typename T> void push_back(T*& arr, int size, int quant)
{
	T* buffer = new T[size + quant]{};
	for (int i = 0; i < size; buffer[i] = arr[i], i++);
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
	for (int i = 0; i < size - quant; buffer[i] = arr[i], i++);
	delete[] arr;
	arr = buffer;
}
template<typename T> void pop_front(T*& arr, int size, int quant)
{
	T* buffer = new T[size - quant]{};
	for (int i = 0; i < size - quant; buffer[i] = arr[i + quant], i++);
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
	if (quant_r) {
		push_front(arr, rows, quant_r);
		for (int i = 0; i < quant_r; arr[i] = new T[cols]{}, i++);
		rows += quant_r;
	}
	if (quant_c) {
		for (int i = 0; i < rows; push_front(arr[i], cols, quant_c), i++);
		cols += quant_c;
	}
}
template<typename T> void push_back(T**& arr, int& rows, int& cols, int quant_r, int quant_c)
{
	if (quant_r) {
		push_back(arr, rows, quant_r);
		for (int i = rows; i < rows + quant_r; arr[i] = new T[cols]{}, i++);
			rows += quant_r;
	}
	if (quant_c) {
		for (int i = 0; i < rows; push_back(arr[i], cols, quant_c), i++);
		cols += quant_c;
	}
}
template<typename T> void insert(T**& arr, int& rows, int& cols, int index_r, int index_c, int quant_r, int quant_c)
{
	if (quant_r) {
		insert(arr, rows, index_r, quant_r);
		for (int i = index_r; i < index_r + quant_r; arr[i] = new T[cols]{}, i++);
		rows +=quant_r;
	}
	if (quant_c) {
		for (int i = 0; i < rows; insert(arr[i], cols, index_c, quant_c), i++);
		cols +=quant_c;
	}
}

template<typename T> void pop_front(T**& arr, int& rows, int& cols, int quant_r, int quant_c)
{
	if (quant_r) {
		pop_front(arr, rows, quant_r);
		rows -= quant_r;
	}
	if (quant_c) {
		for (int i = 0; i < rows; pop_front(arr[i], cols, quant_c), i++);
		cols -= quant_c;
	}
}
template<typename T> void pop_back(T**& arr, int& rows, int& cols, int quant_r, int quant_c)
{
	if (quant_r) {
		pop_back(arr, rows, quant_r);
		rows -= quant_r;
	}
	if (quant_c) {
		for (int i = 0; i < rows; pop_back(arr[i], cols, quant_c), i++);
		cols -= quant_c;
	}
}
template<typename T> void erase(T**& arr, int& rows, int& cols, int index_r, int index_c, int quant_r, int quant_c)
{
	if (quant_r) {
		erase(arr, rows, index_r, quant_r);
		rows -= quant_r;
	}
	if (quant_c) {
		for (int i = 0; i < rows; erase(arr[i], cols, index_c, quant_c), i++);
		cols -= quant_c;
	}
}


