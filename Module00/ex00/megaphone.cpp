#include <iostream>
#include <string>

#define DEF_PHRASE "* LOUD AND UNBEARABLE FEEDBACK NOISE *"

void printInUpperString(std::string word)
{
	for (int i = 0; i < (int)word.length(); ++i) {
		if ('a' <= word[i] && word[i] <= 'z')
			word[i] -= 32;
	}
	std::cout << word;
}

int main(int argc, char **argv) {
	if (argc == 1)
	{
		std::cout << DEF_PHRASE << std::endl;
		return 0;
	}
	for (int i = 1; i < argc; ++i) {
		printInUpperString(argv[i]);
		if (i < argc - 1)
			std::cout << " ";
		else
			std::cout << std::endl;
	}
	return 0;
}
