#include "Array.h"
#include "Count.h"
#include"ar.h"
#include <iostream>
using namespace std;

Array::Array(int size) {
	Array::size = size;
	array = new int[size];
}
Array::Array(const Array& arr): Array(arr.size) {//конcтруктор копирования? делегирование  
	for (int i{ 0 }; i < size; i++) {
		array[i] = arr.array[i];//сам процес копирования.
	}
};
Array::~Array() {
	delete[]array;
}
int Array::getSize()const { return size; }
int Array::getValue(int index)const {
	return array[index];
}
void Array::display() const {
	for (int i{ 0 }; i < size; i++) {
		cout << array[i];
 }


}
void Array ::setSize(int s) {
	int* temp = new int[s];

	for (int i{ 0 }; i < (s > size) ? size : s; i++) {
		temp[i] = array[i];
	}
	delete[]array;
	size = s;
	array = temp;
}
void Array:: sortArrey() {
	for (int i{ 0 }; i < size; i++) {
		for (int j{ 0 }; j < size - 1; j++) {
			std::swap(array[j], array[j + 1]);
		}
	}
}
int Array::getMaxElem(){
	int max = array[0];
	for (int i{ 0 }; i < size; i++) {
		if (max < array[i]) max = array[i];
	}
	return max;
};//мах элемент 
int Array::getMinElem(){
	int min = array[0];
	for (int i{ 0 }; i < size; i++) {
		if (min > array[i]) min = array[i];
	}
	return min;
};