#ifndef MODULE7_ARRAY_HPP
#define MODULE7_ARRAY_HPP

#include <exception>
#include <iostream>

template <typename T>
class Array {

private:
	T*	data;
	int len;

public:
	Array();
	~Array();
	Array(const unsigned int len);
	Array(const Array& src);
	Array& operator=(const Array& src);

	class outOfRange : public std::exception {
		virtual const char *what() const throw();
	};

	T	operator[](int index) const;
	T&	operator[](int index);
	int size()	const;
};
#include "Array.tpp"
#endif