
#include <iostream>
#include "rows_cols.h"
#include "rows_cols.cpp"
#include "menu.h"
using namespace std;

template<typename T> void Add(T**& arr, int& rows, int& cols)
{
	int choice, index_r = 0, index_c = 0, quant_r = 0, quant_c = 0;
	cout << "1 - Добавить строку в начало" << endl;
	cout << "2 - Добавить колонку в начало" << endl;
	cout << "3 - Добавить строку и колонку в начало" << endl;
	cout << "4 - Добавить строку в конец" << endl;
	cout << "5 - Добавить колонку в конец" << endl;
	cout << "6 - Добавить строку и колонку в конец" << endl;
	cout << "7 - Добавить строку по индексу" << endl;
	cout << "8 - Добавить колонку по индексу" << endl;
	cout << "9 - Добавить строку и колонку по индексу" << endl;
	cin >> choice;
	switch (choice)
	{
	case 1:
		cout << "Введите количество добавляемых строк: "; cin >> quant_r;
		push_front(arr, rows, cols, quant_r, quant_c);
		break;
	case 2:
		cout << "Введите количество добавляемых колонок: "; cin >> quant_c;
		push_front(arr, rows, cols, quant_r, quant_c);
		break;
	case 3:
		cout << "Введите количество добавляемых строк: "; cin >> quant_r;
		cout << "Введите количество добавляемых колонок: "; cin >> quant_c;
		push_front(arr, rows, cols, quant_r, quant_c);
		break;
	case 4:
		cout << "Введите количество добавляемых строк: "; cin >> quant_r;
		push_back(arr, rows, cols, quant_r, quant_c);
		break;
	case 5:
		cout << "Введите количество добавляемых колонок: "; cin >> quant_c;
		push_back(arr, rows, cols, quant_r, quant_c);
		break;
	case 6:
		cout << "Введите количество добавляемых строк: "; cin >> quant_r;
		cout << "Введите количество добавляемых колонок: "; cin >> quant_c;
		push_back(arr, rows, cols, quant_r, quant_c);
		break;
	case 7:
		cout << "Введите количество добавляемых строк: "; cin >> quant_r;
		cout << "Введите индекс: "; cin >> index_r;
		insert(arr, rows, cols, index_r, index_c, quant_r, quant_c);
		break;
	case 8:
		cout << "Введите количество добавляемых колонок: "; cin >> quant_c;
		cout << "Введите индекс: "; cin >> index_c;
		insert(arr, rows, cols, index_r, index_c, quant_r, quant_c);
		break;
	case 9:
		cout << "Введите количество добавляемых строк: "; cin >> quant_r;
		cout << "Введите количество добавляемых колонок: "; cin >> quant_c;
		cout << "Введите индекс строки: "; cin >> index_r;
		cout << "Введите индекс колонки: "; cin >> index_c;
		insert(arr, rows, cols, index_r, index_c, quant_r, quant_c);
	}
}
template<typename T> void Delete(T**& arr, int& rows, int& cols)
{
	int choice, index_r = 0, index_c = 0, quant_r = 0, quant_c = 0;
	cout << "1 - Удалить первые строки" << endl;
	cout << "2 - Удалить первые колонки" << endl;
	cout << "3 - Удалить первые строки и колонки" << endl;
	cout << "4 - Удалить последние строки" << endl;
	cout << "5 - Удалить последние колонки" << endl;
	cout << "6 - Удалить последние строки и колонки" << endl;
	cout << "7 - Удалить строки по индексу" << endl;
	cout << "8 - Удалить колонки по индексу" << endl;
	cout << "9 - Удалить строки и колонки по индексу" << endl;
	cin >> choice;
	switch (choice)
	{
	case 1:
		cout << "Введите количество удаляемых строк: "; cin >> quant_r;
		while (quant_r > rows)
		{
			cout << "Превышен размер строки!!!Попробуйте еще раз: "; cin >> quant_r;
		}
		pop_front(arr, rows, cols, quant_r, quant_c);
		break;
	case 2:
		cout << "Введите количество удаляемых колонок: "; cin >> quant_c;
		while (quant_c > cols)
		{
			cout << "Превышен размер колонок!!!Попробуйте еще раз: "; cin >> quant_c;
		}
		pop_front(arr, rows, cols, quant_r, quant_c);
		break;
	case 3:
		cout << "Введите количество удаляемых строк: "; cin >> quant_r;
		while (quant_r > rows)
		{
			cout << "Превышен размер строки!!!Попробуйте еще раз: "; cin >> quant_r;
		}
		cout << "Введите количество удаляемых колонок: "; cin >> quant_c;
		while (quant_c > cols)
		{
			cout << "Превышен размер колонок!!!Попробуйте еще раз: "; cin >> quant_c;
		}
		pop_front(arr, rows, cols, quant_r, quant_c);
		break;
	case 4:
		cout << "Введите количество удаляемых строк: "; cin >> quant_r;
		while (quant_r > rows)
		{
			cout << "Превышен размер строки!!!Попробуйте еще раз: "; cin >> quant_r;
		}
		pop_back(arr, rows, cols, quant_r, quant_c);
		break;
	case 5:
		cout << "Введите количество удаляемых колонок: "; cin >> quant_c;
		while (quant_c > cols)
		{
			cout << "Превышен размер колонок!!!Попробуйте еще раз: "; cin >> quant_c;
		}
		pop_back(arr, rows, cols, quant_r, quant_c);
		break;
	case 6:
		cout << "Введите количество удаляемых строк: "; cin >> quant_r;
		while (quant_r > rows)
		{
			cout << "Превышен размер строки!!!Попробуйте еще раз: "; cin >> quant_r;
		}
		cout << "Введите количество удаляемых колонок: "; cin >> quant_c;
		while (quant_c > cols)
		{
			cout << "Превышен размер колонок!!!Попробуйте еще раз: "; cin >> quant_c;
		}
		pop_back(arr, rows, cols, quant_r, quant_c);
		break;
	case 7:
		cout << "Введите количество удаляемых строк: "; cin >> quant_r;
		while (quant_r > rows)
		{
			cout << "Превышен размер строки!!!Попробуйте еще раз: "; cin >> quant_r;
		}
		cout << "Введите индекс: "; cin >> index_r;
		while (index_r + quant_r > rows)
		{
			cout << "Выход за пределы массива!!!Попробуйте еще раз: "; cin >> index_r;
		}
		erase(arr, rows, cols, index_r, index_c, quant_r, quant_c);
		break;
	case 8:
		cout << "Введите количество удаляемых колонок: "; cin >> quant_c;
		while (quant_c > cols)
		{
			cout << "Превышен размер колонок!!!Попробуйте еще раз: "; cin >> quant_c;
		}
		cout << "Введите индекс: "; cin >> index_c;
		while (index_c + quant_c > cols)
		{
			cout << "Выход за пределы массива!!!Попробуйте еще раз: "; cin >> index_c;
		}
		erase(arr, rows, cols, index_r, index_c, quant_r, quant_c);
		break;
	case 9:
		cout << "Введите количество удаляемых строк: "; cin >> quant_r;
		while (quant_r > rows)
		{
			cout << "Превышен размер строки!!!Попробуйте еще раз: "; cin >> quant_r;
		}
		cout << "Введите количество удаляемых колонок: "; cin >> quant_c;
		while (quant_c > cols)
		{
			cout << "Превышен размер колонок!!!Попробуйте еще раз: "; cin >> quant_c;
		}
		cout << "Введите индекс строки: "; cin >> index_r;
		while (index_r + quant_r > rows)
		{
			cout << "Выход за пределы массива!!!Попробуйте еще раз: "; cin >> index_r;
		}
		cout << "Введите индекс колонки: "; cin >> index_c;
		while (index_c + quant_c > cols)
		{
			cout << "Выход за пределы массива!!!Попробуйте еще раз: "; cin >> index_c;
		}
		erase(arr, rows, cols, index_r, index_c, quant_r, quant_c);
	}
}

template<typename T> void Menu(T**& arr, int& rows, int& cols)
{
	cout << "1 - удаление" << endl;
	cout << "2 - добавление" << endl;
	int choice; cin >> choice;
	switch (choice)
	{
	case 1:
		Delete(arr, rows, cols);
		break;
	case 2:
		Add(arr, rows, cols);
	}
}


template<typename T> void Add(T*& arr, int& size)
{
	int index, quant = 0;
	cout << "Введите количество добавляемых элементов: "; cin >> quant;
	cout << "1 - В начало" << endl;
	cout << "2 - В конец" << endl;
	cout << "3 - В по индексу" << endl;
	int x; cin >> x;
	switch (x)
	{
	case 1:
		push_front(arr, size, quant);
		size += quant;
		break;
	case 2:
		push_back(arr, size, quant);
		size += quant;
		break;
	case 3:
		cout << "Введите индекс: "; cin >> index;
		insert(arr, size, index, quant);
		size += quant;
	}
}
template<typename T> void Delete(T*& arr, int& size)
{
	int index, quant = 0;
	cout << "Введите количество удаляемых элементов: "; cin >> quant;
	cout << "1 - первого элемента" << endl;
	cout << "2 - последнего элемента" << endl;
	cout << "3 - В по индексу" << endl;
	int x; cin >> x;
	switch (x)
	{
	case 1:
		pop_front(arr, size, quant);
		size -= quant;
		break;
	case 2:
		pop_back(arr, size, quant);
		size -= quant;
		break;
	case 3:
		cout << "Введите индекс: "; cin >> index;
		erase(arr, size, index, quant);
		size -= quant;
	}
}
template<typename T> void Menu(T*& arr, int& size)
{
	cout << "1 - Добавление элемента" << endl;
	cout << "2 - Удаление элемента" << endl;
	int choice; cin >> choice;
	switch (choice)
	{
	case 1:
		Add(arr, size);
		break;
	case 2:
		Delete(arr, size);
	}
}