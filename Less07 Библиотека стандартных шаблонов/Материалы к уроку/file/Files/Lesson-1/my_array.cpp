#include <iostream>
#include "my_array.h"
#include <cassert>

template<typename T>
my_array<T>::my_array(int lenght) : len(lenght) {
	assert(len >= 0);
	if (len > 0)
		data = new T[len];
	else
		data = nullptr;
}

template<typename T>
my_array<T>::~my_array() {
	delete[] data;
}

template<typename T>
void my_array<T>::empty() {
	delete[] data;
	data = nullptr;
	len = 0;
}

template<typename T>
void my_array<T>::resize(int new_length) {
	if (len == new_length)
		return;

	if (new_length <= 0) {
		my_array::empty();
		return;
	}

	T* new_data = new T[new_length];

	if (len > 0) {
		int elements = (new_length > len) ? len : new_length;
		for (int i = 0; i < elements; i++)
			new_data[i] = data[i];
	}

	delete[] data;
	data = new_data;
	len = new_length;
	//delete[] new_data;
}

template<typename T>
T& my_array<T>::operator [](int index) {
	assert(index >= 0 && index < len);
	return *(data + index);
}

template<typename T>
void my_array<T>::print() {
	for (int i = 0; i < len; i++)
		std::cout << i << ") Element is: " << data[i] << std::endl;
}

template<typename T>
int my_array<T>::get_legth() {
	return len;
}