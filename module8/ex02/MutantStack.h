#ifndef MODULE8_MUTANTSTACK_H
#define MODULE8_MUTANTSTACK_H

#include <iostream>
#include <stack>

template<typename T>
class MutantStack : public std::stack<T> {

public:
	MutantStack() : std::stack<T>() {}
	~MutantStack() {}
	MutantStack(const MutantStack<T>& src) : std::stack<T>(src) {}
	MutantStack& operator=(const MutantStack<T>& src) {
		if (this == &src)
			return *this;
		std::stack<T>::operator=(src);
	}

	typedef typename std::stack<T>::container_type::iterator iterator;
	typedef typename std::stack<T>::container_type::const_iterator const_iterator;

	iterator begin(void) {

		return std::stack<T>::c.begin();
	}

	const_iterator begin(void) const {

		return std::stack<T>::c.begin();
	}

	iterator end(void) {

		return std::stack<T>::c.end();
	}

	const_iterator end(void) const {

		return std::stack<T>::c.end();
	}

};

#endif

