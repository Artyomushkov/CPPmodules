#ifndef MODULE8_SPAN_H
#define MODULE8_SPAN_H

#include <iostream>
#include <algorithm>
#include <vector>
#include <exception>

class Span {

private:
	unsigned int 		size;
	std::vector<int>	vec;
	Span();

public:
	Span(unsigned int n);
	~Span();
	Span(const Span& src);
	Span& operator=(const Span& src);

	class addNumberException : public std::exception {
		virtual const char *what() const throw();
	};

	class noSpanException : public std::exception {
		virtual const char *what() const throw();
	};

	void			addNumber(const int num);
	void			addNumber(const std::vector<int>& other);
	void			addNumber(const int from, const int to);
	unsigned int	shortestSpan();
	unsigned int	longestSpan();
};


#endif
