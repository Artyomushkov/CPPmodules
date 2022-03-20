#ifndef MODULE7_ITER_HPP
#define MODULE7_ITER_HPP

#include <iostream>

template <typename T>
void	iter(T* arr, int len, void (*f)(T&)) {

	for (int i = 0; i < len; ++i)
		f(arr[i]);
}

template <typename T>
void	iter(T* arr, int len, void (*f)(const T&)) {

	for (int i = 0; i < len; ++i)
		f(arr[i]);
}

template <typename T>
void	display(const T& elem) {

	std::cout << elem << " ";
}

template <typename T>
void	increment(T& elem) {

	++elem;
}
#endif
