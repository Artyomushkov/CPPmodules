#include "easyfind.h"

#include <vector>
#include <list>

int main(void) {

	std::vector<int> v;
	std::list<int> l;
	const	std::vector<int> v2(5, 3);

	v.push_back(3);
	v.push_back(7);
	v.push_back(5);
	l.push_back(1);
	l.push_back(10);
	l.push_back(2);
	std::cout << *easyfind(v, 5) << std::endl;
	std::cout << *easyfind(l, 2) << std::endl;
	std::cout << *easyfind(v2, 3) << std::endl;
	try {
		easyfind(l, 12);
	}
	catch (std::exception &e) {
		std::cout << e.what();
	}
}