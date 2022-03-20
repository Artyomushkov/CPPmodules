#include "Caster.h"

int main(int argc, char *argv[]) {

	if (argc != 2) {
		std::cout
		<< "Arguments error: there should be only one argument" << std::endl;
		return (1);
	}
	std::cout << Caster(argv[1]) << std::endl;
}
