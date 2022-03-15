#include <iostream>
#include <cctype>

char my_toupper(char ch)
{
    return static_cast<char>(std::toupper(static_cast<unsigned char>(ch)));
}

int	main(int argc, char **argv) {

	int	i;

	if (argc == 1) {
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
		return (0);
	}
	for (int j = 1; j < argc; ++j) {
		i = 0;
		for (int i = 0; argv[j][i]; ++i) {
			std::cout << my_toupper(argv[j][i]);
		}
	}
	std::cout << std::endl;
}
