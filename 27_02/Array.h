#pragma once

#include "Count.h"
#include"ar.h"
#include <iostream>
using namespace std;

class Array
{//������ ����� �������� � ���� ���� ,1 ������ ~~
	int size;
	int* array;
	int getElemet(bool);
public:
	 Array(int s = 10);//�������� �� ���������// ���������� ������� � ��� ������ ������� ���������� ����� 
	~Array();//�������
	Array(const Array& arr);       //���������� ����������� 
	int getSize() const;           //���������� ������ �������
	int getValue(int )const;      // ���������� �������� ������� �� �������
	void satValue(int , int );    // �������� �������� ��������
	void display( ) const;// ������� ������ �� �����
	void setSize(int );//��������� ������� �������
	void sortArrey();//���������� mass
	int getMaxElem();//��� ������� 
	int getMinElem();// ��� ������� 

};

