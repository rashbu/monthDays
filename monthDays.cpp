#include <iostream>
#include <cstdlib>

int monthNumber;
int year;

int main() {

	std::cout << "Enter a month number: ";

	if (!(std::cin >> monthNumber)) {
		std::cerr << "This is not a number!";
		exit(0);
	}

	switch (monthNumber) {
		case 1: {
		}
		case 3: {
		}
		case 5: {
		}
		case 7: {
		}
		case 8: {
		}
		case 10: {
		}
		case 12: {
			std::cout << "This month has 31 days!";
			break;
		}
		case 4: {
		}
		case 6: {
		}
		case 9: {
		}
		case 11: {
			std::cout << "This month has 30 days!";
			break;
		}
		case 2: {
			std::cout << "Enter year: ";
			std::cin >> year;
			if (((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0)) {
				std::cout << "This month has 29 days!";
			}
			else {
				std::cout << "This month has 28 days!";
			}
			break;
		}
		default: {
			std::cout << "Incorrect month number!";
		}
	}


	return 0;
}