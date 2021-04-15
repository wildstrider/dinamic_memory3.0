#pragma once
#include <iostream>
using namespace std;

template<typename T> void push_front(T*& arr, int size, int quant);

	
template<typename T> void push_back(T*& arr, int size, int quant);

template<typename T> void insert(T*& arr, int size, int index, int quant);


template<typename T> void pop_back(T*& arr, int size, int quant);

template<typename T> void pop_front(T*& arr, int size, int quant);

template<typename T> void erase(T*& arr, int size, int index, int quant);



template<typename T> void push_front(T**& arr, int& rows, int& cols, int quant_r, int quant_c);

template<typename T> void push_back(T**& arr, int& rows, int& cols, int quant_r, int quant_c);

template<typename T> void insert(T**& arr, int& rows, int& cols, int index_r, int index_c, int quant_r, int quant_c);

template<typename T> void pop_front(T**& arr, int& rows, int& cols, int quant_r, int quant_c);

template<typename T> void pop_back(T**& arr, int& rows, int& cols, int quant_r, int quant_c);

template<typename T> void erase(T**& arr, int& rows, int& cols, int index_r, int index_c, int quant_r, int quant_c);


