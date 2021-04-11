#pragma once

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