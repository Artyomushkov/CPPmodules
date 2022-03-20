#include "iter.hpp"

int main(void) {

	int	intArr[4] = {0, 1, 2, 3};
	float floatArr[3] = {1.1, 2.1, 3.1};

	iter(intArr, 4, increment<int>);
	iter(intArr, 4, display);
	std::cout << std::endl;
	iter(floatArr, 3, increment<float>);
	iter(floatArr, 3, display);
	std::cout << std::endl;
}
