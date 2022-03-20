#include "A.h"
#include "B.h"
#include "C.h"

Base* generate(void) {

	srand(time(NULL));
	int i = rand() % 3;
	if (i == 0)
		return new A;
	else if (i == 1)
		return new B;
	else
		return new C;
}

void identify(Base* p) {

	if (dynamic_cast<A*>(p) != NULL)
		std::cout << "Type A" << std::endl;
	else if (dynamic_cast<B*>(p) != NULL)
		std::cout << "Type B" << std::endl;
	else if (dynamic_cast<C*>(p) != NULL)
		std::cout << "Type C" << std::endl;
}

void identify(Base& p) {

	Base	res;

	try {
		res = dynamic_cast<A&>(p);
		std::cout << "Type A" << std::endl;
	}
	catch (const std::exception& e) {}
	try {
		res = dynamic_cast<B&>(p);
		std::cout << "Type B" << std::endl;
	}
	catch (const std::exception& e) {}
	try {
		res = dynamic_cast<C&>(p);
		std::cout << "Type C" << std::endl;
	}
	catch (const std::exception& e) {}
}

int main(void) {

	Base* base = generate();
	identify(base);
	identify(*base);
	delete base;
}

