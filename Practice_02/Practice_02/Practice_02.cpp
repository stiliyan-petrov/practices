#include <iostream>

int main()
{
	//Zadacha 1
	int year = 0;
	std::cin >> year;
	std::cout << ((year % 400 == 0) || (year % 4 == 0 && year % 100 != 0) ? "Leap year" : "Not a leap year") << std::endl;

	//Zadacha 2
	char letter;
	std::cin >> letter;
	if (('A' <= letter && letter <= 'Z') || ('a' <= letter && letter <= 'z')) {
		switch (letter) {
		case 'a':
		case 'e':
		case 'i':
		case 'o':
		case 'u':
		case 'A':
		case 'E':
		case 'I':
		case 'O':
		case 'U':
			std::cout << "Vowel" << std::endl;
			break;
		default:
			std::cout << "Not a vowel" << std::endl;
			break;
		}
	}
	else {
		std::cout << "Not a letter!" << std::endl;
	}

	//Zadacha 3
	int num1, num2;
	std::cout << "Enter numbers to compare: ";
	std::cin >> num1 >> num2;
	std::cout << (num1 > num2 ? num1 : num2);

	//Zadacha 4
	int result = 0;
	std::cout << "Result: ";
	std::cin >> result;
	int grade = 0;
	if (result >= 80) {
		grade = 6;
	}
	else if (result >= 70) {
		grade = 5;
	}
	else if (result >= 60) {
		grade = 4;
	}
	else if (result >= 40) {
		grade = 3;
	}
	else grade = 2;
	std::cout << "Grade: " << grade;
	if (result >= 90) {
		std::cout << "+";
	}
	std::cout << std::endl;

	//Zadacha 5
	int sideA, sideB, sideC;
	std::cout << "Enter sides of triangle: ";
	std::cin >> sideA >> sideB >> sideC;
	if ((sideA + sideB > sideC) && (sideA + sideC > sideB) && (sideC + sideB > sideA)) {
		std::cout << "Valid triangle" << std::endl;
	} else {
		std::cout << "Invalid triangle!" << std::endl;
	}

	//Zadacha 6
	int coeffA = 0, coeffB = 0, coeffC = 0;
	std::cout << "a = ";
	std::cin >> coeffA;
	std::cout << "b = ";
	std::cin >> coeffB;
	std::cout << "c = ";
	std::cin >> coeffC;
	double D = coeffB * coeffB - 4 * coeffA * coeffC;
	if (D > 0) {
		double x1, x2;
		D = sqrt(D);
		x1 = ((coeffB * -1.0) + D) / 2;
		x2 = ((coeffB * -1.0) - D) / 2;
		std::cout << "x1 = " << x1 << std::endl;
		std::cout << "x2 = " << x2 << std::endl;
	}
	else if (D == 0) {
		double x = coeffB * -0.5;
		std::cout << "x1 = x2 = " << x << std::endl;
	}
	else if (D < 0) {
		double xRe, xIm;
		D = abs(D);
		xRe = coeffB * -0.5;
		xIm = sqrt(D) * 0.5;
		std::cout << "x1 = " << xRe << " + " << xIm << "i" << std::endl;
		std::cout << "x2 = " << xRe << " - " << xIm << "i" << std::endl;
	}

	//Zadacha 7
	char symbol;
	std::cin >> symbol;
	if ('A' <= symbol && symbol <= 'Z') {
		std::cout << (symbol + 32) << std::endl;
	}
	else if ('a' <= symbol && symbol <= 'z') {
		std::cout << (symbol - 32) << std::endl;
	}
	else {
		std::cout << "Invalid character!" << std::endl;
	}

	//Zadacha 8
	int numArabic = 0;
	int nM = 0, nD = 0, nC = 0, nL = 0, nX = 0, nV = 0, nI = 0;
	std::cout << "Arabic numeral: ";
	std::cin >> numArabic;
	if (numArabic >= 5000) std::cout << "Out of reach: insufficient numerals" << std::endl;
	else {
		int thousands = numArabic / 1000;
		int hundreds = (numArabic / 100) % 10;
		int tens = (numArabic / 10) % 10;
		int units = numArabic % 10;
		for (int i = 0; i < thousands; i++) {
			std::cout << 'M';
		}
		switch (hundreds) {
		case 9:
			std::cout << "CM";
			break;
		case 8: case 7: case 6: case 5:
			std::cout << 'D';
			for (int i = 5; i < hundreds; i++) {
				std::cout << 'C';
			}
			break;
		case 4:
			std::cout << "CD";
			break;
		case 3: case 2: case 1: case 0:
			for (int i = 0; i < hundreds; i++) {
				std::cout << 'C';
			}
			break;
		}
		switch (tens) {
		case 9:
			std::cout << "XC";
			break;
		case 8: case 7: case 6: case 5:
			std::cout << 'L';
			for (int i = 5; i < tens; i++) {
				std::cout << 'X';
			}
			break;
		case 4:
			std::cout << "XL";
			break;
		case 3: case 2: case 1: case 0:
			for (int i = 0; i < tens; i++) {
				std::cout << 'X';
			}
			break;
		}
		switch (units) {
		case 9:
			std::cout << "IX";
			break;
		case 8: case 7: case 6: case 5:
			std::cout << 'V';
			for (int i = 5; i < units; i++) {
				std::cout << 'I';
			}
			break;
		case 4:
			std::cout << "IV";
			break;
		case 3: case 2: case 1: case 0:
			for (int i = 0; i < units; i++) {
				std::cout << 'I';
			}
			break;
		}
	}
	std::cout << std::endl;

	//Zadacha 9
	int sortA = 0, sortB = 0, sortC = 0;
	std::cout << "Enter numbers to sort: ";
	std::cin >> sortA >> sortB >> sortC;
	bool AB = sortA < sortB;
	bool BC = sortB < sortC;
	bool CA = sortC < sortA;
	if (AB) {
		if (BC) {
			std::cout << "Sorted: " << sortA << " " << sortB << " " << sortC << std::endl;
		}
		else if (CA) {
			std::cout << "Sorted: " << sortC << " " << sortA << " " << sortB << std::endl;
		}
		else {
			std::cout << "Sorted: " << sortA << " " << sortC << " " << sortB << std::endl;
		}
	}
	else {
		if (!BC) {
			std::cout << "Sorted: " << sortC << " " << sortB << " " << sortA << std::endl;
		}
		else if (!CA) {
			std::cout << "Sorted: " << sortB << " " << sortA << " " << sortC << std::endl;
		}
		else {
			std::cout << "Sorted: " << sortB << " " << sortC << " " << sortA << std::endl;
		}
	}

	//Zadacha 10
	double lhs, rhs;
	char op;
	std::cin >> lhs >> op >> rhs;
	switch (op) {
	case '+':
		std::cout << lhs + rhs;
		break;
	case '-':
		std::cout << lhs - rhs;
		break;
	case '*':
		std::cout << lhs * rhs;
		break;
	case '/':
		if (rhs == 0) { 
			std::cout << "Invalid divisor!"; 
		}
		else {
			std::cout << lhs / rhs;
		}
		break;
	}
	std::cout << std::endl;

	//Zadacha 11

}