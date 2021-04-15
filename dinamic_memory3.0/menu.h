#pragma once
//#include <iostream>
#include "rows_cols.h"
using namespace std;

template<typename T> void Add(T**& arr, int& rows, int& cols);

template<typename T> void Delete(T**& arr, int& rows, int& cols);


template<typename T> void Menu(T**& arr, int& rows, int& cols);


template<typename T> void Add(T*& arr, int& size);

template<typename T> void Delete(T*& arr, int& size);
template<typename T> void Menu(T*& arr, int& size);


