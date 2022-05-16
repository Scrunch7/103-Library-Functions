// 103 Library Functions.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cstring>
#include <string>
#include <vector>



void ch1() {

	std::string word = "a";

	std::cout << "enter a word: ";
	std::cin >> word;

	for (int i = 0; i < word[i]; i++) {

		std::cout << static_cast<char>(word[i] + 1);
	}

}

void ch2() {

	std::string word;

	std::cin >> word;

	for (const auto& item : word) {
		std::cout << item << "; ";
	}
	std::cout << "\n";

	std::sort(word.begin(), word.end());

	for (const auto& item : word) {
		std::cout << item << "; ";
	}
	std::cout << "\n";

}

int main() {
	
	ch1();

}
