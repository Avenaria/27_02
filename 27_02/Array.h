#pragma once

#include "Count.h"
#include"ar.h"
#include <iostream>
using namespace std;

class Array
{//инлайн метод содержит в себе ревл ,1 строка ~~
	int size;
	int* array;
	int getElemet(bool);
public:
	 Array(int s = 10);//значение по умолчанию// заставл€ет работаь с тем данных который изначально задан 
	~Array();//дуструк
	Array(const Array& arr);       //коструктор копировани€ 
	int getSize() const;           //возвращает размер массива
	int getValue(int )const;      // возвращает эллемент массива по индексу
	void satValue(int , int );    // замен€ет значение элемента
	void display( ) const;// выводит массив на экран
	void setSize(int );//изменение размера массива
	void sortArrey();//сортировка mass
	int getMaxElem();//мах элемент 
	int getMinElem();// мин элемент 

};

