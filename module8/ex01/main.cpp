#include "Span.h"
#include <random>
#include <ctime>

int main(void) {

	srand(time(NULL));
	Span	span(9);
	std::vector<int> vec;


	vec.push_back(2);
	vec.push_back(5);
	vec.push_back(3);
	vec.push_back(-20);
	vec.push_back(-7);
	vec.push_back(15);
	vec.push_back(23);
	vec.push_back(0);
	vec.push_back(2147483647);

	span.addNumber(vec);
	std::cout << span.shortestSpan() << std::endl;
	std::cout << span.longestSpan() << std::endl << std::endl;

	try {
		span.addNumber(12);
	}
	catch (std::exception& e) {
		std::cout << e.what() << std::endl << std::endl;
	}

	std::vector<int> vec2;
	int num;
	Span	span2(20000);
	for (int i = 0; i < 20000; ++i) {
		num = rand();
		vec2.push_back(num);
	}
	span2.addNumber(vec2);
	std::cout << span2.shortestSpan() << std::endl;
	std::cout << span2.longestSpan() << std::endl << std::endl;

	Span span3(40);
	try {
		span3.shortestSpan();
	}
	catch (std::exception& e) {
		std::cout << e.what() << std::endl << std::endl;
	}
}

