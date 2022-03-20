#include "Data.h"

int main(void) {

	Data	data1 = Data(6);

	std::cout << "before: " << &data1 << std::endl;
	uintptr_t val;
	val = serialize(&data1);
	Data*	data2 = deserialize(val);
	std::cout << "after: " << data2 << std::endl;
}