#include "pch.h"
#include <iostream>
#include <string>
#include <typeinfo>

int main()
{
	std::cout << "This test file does absolutely nothing." << std::endl;
	std::cout << "Please enter a word:" << std::endl;

	std::string test_word;
	std::cin >> test_word;

	std::cout << "You entered '" << test_word << "' as your word." << std::endl;
	std::cout << "Congratulations, you have reached the end of a pointless program." << std::endl;

	return 0;
}