#include <iostream>
#include <cmath>

int main()
{
    //Zadacha 1
    std::cout << "1." << std::endl;
    std::cout << "Oh what" << std::endl;
    std::cout << "a happy day!" << std::endl;
    std::cout << "Oh yes, " << std::endl;
    std::cout << "what a wonderful day!" << std::endl;

    //Zadacha 2
    std::cout << "\n2." << std::endl;
    std::cout << 5.4 * 7.9 << std::endl;

    //Zadacha 3
    std::cout << "\n3." << std::endl;
    const double EUR_TO_BGN = 1.95833;
    const double USD_TO_BGN = 1.84528;
    double leva = 0;
    std::cout << "Enter value in BGN: ";
    std::cin >> leva;
    double euro = leva / EUR_TO_BGN;
    double dollars = leva / USD_TO_BGN;
    int levaInt = leva * 100;
    int euroInt = euro * 100;
    int dollarsInt = dollars * 100;
    leva = levaInt / 100.0;
    euro = euroInt / 100.0;
    dollars = dollarsInt / 100.0;
    std::cout << leva << " BGN = " << euro << " EUR" << std::endl;
    std::cout << leva << " BGN = " << dollars << " USD" << std::endl;

    //Zadacha 4
    std::cout << "\n4." << std::endl;
    double sideA = 0, sideB = 0;
    std::cout << "Enter first side of rectangle: ";
    std::cin >> sideA;
    std::cout << "Enter second side of rectangle: ";
    std::cin >> sideB;
    double rectPerimeter = (sideA + sideB) * 2;
    double rectArea = sideA * sideB;
    std::cout << "Perimeter of rectangle: " << rectPerimeter << std::endl;
    std::cout << "Area of rectangle: " << rectArea << std::endl;

    //Zadacha 5
    std::cout << "\n5." << std::endl;
    int num1, num2;
    std::cout << "Enter numbers to compare: ";
    std::cin >> num1 >> num2;
    std::cout << (num1 < num2 ? "true" : "false") << std::endl;

    //Zadacha 6
    std::cout << "\n6." << std::endl;
    int dividend = 0, divisor = 0, quotient = 0, remainder = 0;
    std::cout << "Enter dividend: ";
    std::cin >> dividend;
    std::cout << "Enter divisor: ";
    std::cin >> divisor;
    quotient = dividend / divisor;
    remainder = dividend % divisor;
    std::cout << "Quotient: " << quotient << std::endl;
    std::cout << "Remainder: " << remainder << std::endl;

    //Zadacha 7
    std::cout << "\n7." << std::endl;
    int apples, pears, bananas;
    std::cout << "Apples: ";
    std::cin >> apples;
    std::cout << "Pears: ";
    std::cin >> pears;
    std::cout << "Bananas: ";
    std::cin >> bananas;
    std::cout << "Pesho, don't forget to buy " << apples << " apples, " << pears << " pears, and " << bananas << " bananas!" << std::endl;

    //Zadacha 8
    std::cout << "\n8." << std::endl;
    int r;
    const double PI = 3.14159265;
    std::cout << "Enter radius: ";
    std::cin >> r;
    double circLength = 2 * (double)r * PI;
    double circArea = (double)r * (double)r * PI;
    std::cout << "Length of circumference: " << circLength << std::endl;
    std::cout << "Area of circle: " << circArea << std::endl;

    //Zadacha 9
    std::cout << "\n9." << std::endl;
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

    //Zadacha 10
    std::cout << "\n10." << std::endl;
    int numL = 0, numR = 0;
    std::cout << "Enter numbers to swap: ";
    std::cin >> numL >> numR;
    numL += numR;
    numR = numL - numR;
    numL -= numR;
    std::cout << numL << " " << numR << std::endl;

    //Zadacha 11
    std::cout << "\n11." << std::endl;
    int numMm1 = 0, numMm2 = 0;
    std::cout << "Enter numbers to find max and min: ";
    std::cin >> numMm1 >> numMm2;
    int maxNum = numMm1 > numMm2 ? numMm1 : numMm2;
    int minNum = numMm1 < numMm2 ? numMm1 : numMm2;
    std::cout << "Maximum number: " << maxNum << std::endl;
    std::cout << "Minimum number: " << minNum << std::endl;

    //Zadacha 12
    std::cout << "\n12." << std::endl;
    int sec = 0;
    std::cout << "Enter number of seconds: ";
    std::cin >> sec;
    int d = sec / 86400;
    int hr = (sec / 3600) % 24;
    int min = (sec / 60) % 60;
    std::cout << sec << " seconds = " << d << " days, " << hr << " hours, " << min << " minutes, and ";
    sec = sec % 60;
    std::cout << sec << " seconds" << std::endl;

    //Zadacha 13
    std::cout << "\n13." << std::endl;
    double m1 = 0, m2 = 0, n1 = 0, n2 = 0;
    std::cout << "Enter coordinates of point M: ";
    std::cin >> m1 >> m2;
    std::cout << "Enter coordinates of point N: ";
    std::cin >> n1 >> n2;
    double dm = abs(m1 - n1);
    double dn = abs(m2 - n2);
    double dist = sqrt(dm * dm + dn * dn);
    std::cout << "Distance MN: " << dist << std::endl;

    //Zadacha 14
    unsigned long long creditCardNum = 0;
    std::cout << "Enter credit card number: ";
    std::cin >> creditCardNum;
    int numLength = log10(creditCardNum) + 1;
    while (numLength != 16) {
        std::cout << "Invalid input. Try again: ";
        std::cin >> creditCardNum;
        numLength = log10(creditCardNum) + 1;
    }
    creditCardNum %= 10000;
    std::cout << "XXXXXXXXXXXX" << creditCardNum << std::endl;
}

