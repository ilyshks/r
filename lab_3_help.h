#pragma once
#include <iostream>

void input_num(int& n) {
	while (true) {
		std::cin >> n;
		if (std::cin.fail()) {
			std::cin.clear();
			std::cin.ignore(std::cin.rdbuf()->in_avail());
			std::cout << "¬ведите заново: ";
		}
		else {
			std::cin.ignore(std::cin.rdbuf()->in_avail());
			break;
		}
	}
}

void input_num(double& n) {
	while (true) {
		std::cin >> n;
		if (std::cin.fail()) {
			std::cin.clear();
			std::cin.ignore(std::cin.rdbuf()->in_avail());
			std::cout << "¬ведите заново: ";
		}
		else {
			std::cin.ignore(std::cin.rdbuf()->in_avail());
			break;
		}
	}
}


