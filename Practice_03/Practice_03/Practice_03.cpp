#include <iostream>

int main()
{
	//Zadacha 1
	int ladder = 0;
	std::cin >> ladder;
	for (int i = 1; i <= ladder; i++) {
		for (int j = 1; j <= i; j++) {
			std::cout << j;
		}
		std::cout << '\n';
	}

	//Zadacha 2
	int sum = 0;
	std::cin >> sum;
	int y;
	for (int x = 1; x < sum; x++) {
		y = sum - x;
		std::cout << "x = " << x << ", y = " << y << '\n';
	}

	//Zadacha 3
	int numSq = 0;
	std::cin >> numSq;
	int square = numSq * numSq;
	int reverseSquare = 0;
	while (square > 0) {
		reverseSquare *= 10;
		reverseSquare += square % 10;
		square /= 10;
	}
	std::cout << reverseSquare << '\n';

	//Zadacha 4
	int num = 0;
	std::cin >> num;
	int factorial = 1;
	while (num > 0) {
		factorial *= num;
		num--;
	}
	std::cout << "Factorial: " << factorial << '\n';

	//Zadacha 5                                       

}