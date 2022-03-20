#ifndef MODULE8_EASYFIND_H
#define MODULE8_EASYFIND_H

#include <algorithm>
#include <iostream>
#include <exception>

class noSuchNumber : public std::exception {
	virtual const char *what() const throw() {
		return "No such number in container\n";
	}
};

template <typename T>
typename T::iterator	easyfind(T& cont, const int num) {

	typename T::iterator it = std::find(cont.begin(), cont.end(), num);;
	if (it != cont.end())
		return (it);
	else
		throw noSuchNumber();

}

template <typename T>
typename T::const_iterator	easyfind(const T& cont, const int num) {

	typename T::const_iterator it = std::find(cont.begin(), cont.end(), num);;
	if (it != cont.end())
		return (it);
	else
		throw noSuchNumber();

}
#endif
