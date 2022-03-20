#include "Span.h"

Span::Span() {}

Span::~Span() {}

Span::Span(unsigned int n) : size(n) {}

Span::Span(const Span& src) : size(src.size), vec(src.vec) {}

Span&	Span::operator=(const Span &src) {

	if (this == &src)
		return *this;
	this->size = src.size;
	this->vec = src.vec;
	return *this;
}

const char*	Span::addNumberException::what() const throw() {

	return "Vector is overflowed";
}

const char*	Span::noSpanException::what() const throw() {

	return "Span can't be found: too few numbers in vector";
}

void	Span::addNumber(const int num) {

	if (this->vec.size() == this->size)
		throw addNumberException();
	this->vec.push_back(num);
}

void	Span::addNumber(const std::vector<int>& other) {

	if (this->vec.size() + other.size() > this->size)
		throw addNumberException();
	this->vec.insert(this->vec.begin(), other.begin(), other.end());
}

void	Span::addNumber(const int from, const int to) {

	if (from > to || this->vec.size() + from - to > this->size)
		throw addNumberException();
	for (int i = from; i < to; ++i)
		this->vec.push_back(i);
}

unsigned int	Span::shortestSpan() {

	if (this->vec.size() < 1)
		throw noSpanException();
	std::vector<int> copy = this->vec;
	std::sort(copy.begin(), copy.end());
	unsigned int res = copy[1] - copy[0];
	if (res == 0)
		return (res);
	unsigned int diff;
	for (size_t i = 2; i < copy.size(); ++i) {
		diff = copy[i] - copy[i - 1];
		if (diff == 0)
			return (diff);
		if (diff < res)
			res = diff;
	}
	return (res);
}

unsigned int	Span::longestSpan() {

	if (this->vec.size() < 1)
		throw noSpanException();

	int max = *std::max_element(this->vec.begin(), this->vec.end());
	int min = *std::min_element(this->vec.begin(), this->vec.end());
	return (max - min);
}