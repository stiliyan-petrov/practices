#include <iostream>
#include <cmath>

int sum(int a, int b);
bool isEven(int n);
bool isPositive(int n);
bool isNegative(int n);
int absValue(int n);
double fabsValue(double n);
void printNTimes(char c, int n);
bool isCapitalLetter(char c);
bool checkSymbol(char c);
char to_lower(char c);
char to_upper(char c);
int numberLength(int n);
int kthDigit(int number, int k);
bool isSquare(int number);
int LCM(int a, int b);
int LCMThreeNumbers(int a, int b, int c);
long long concat(int first, int second);
bool isInInterval(int a, int lower, int upper);
void askUser(int from, int to);
long long pow(int number, unsigned N);
int calculate(int a, int b, char action);
int GCD(int a, int b);
int GCDFourNumbers(int a, int b, int c, int d);
bool validInput(int a);
int closestPowerOfTwo(int a);
bool isPrime(int n);
void printAllPrimes(int n);
bool sumOfPrimes(int n);
int digitSum(int n);
int singleDigitDigitSum(int n);

//Main-----------------------------
int main()
{
    return 0;
}
//Main-----------------------------

//Zadacha 1
int sum(int a, int b) {
    return a + b;
}
//Zadacha 2
bool isEven(int n) {
    return n % 2 == 0;
}
//Zadacha 3
bool isPositive(int n) {
    return n > 0;
}
bool isNegative(int n) {
    return n < 0;
}
//Zadacha 4
int absValue(int n) {
    return n >= 0 ? n : n * -1;
}
double fabsValue(double n) {
    return n >= DBL_EPSILON ? n : n * -1;
}
//Zadacha 5
void printNTimes(char c, int N) {
    for (int i = 0; i < N; i++) {
        std::cout << c;
    }
}
//Zadacha 6
bool isCapitalLetter(char c) {
    return ('A' <= c && c <= 'Z');
}
bool checkSymbol(char c) {
    return (('A' <= c && c <= 'Z') || ('a' <= c && c <= 'z'));
}
//Zadacha 7
char to_lower(char c) {
    if (isCapitalLetter(c)) return (char)((int)c + 32);
}
char to_upper(char c) {
    if (checkSymbol(c) && !isCapitalLetter(c)) return (char)((int)c - 32);
}
//Zadacha 8
int numberLength(int n){
    int l = 0;
    if (n == 0) { 
        l = 1; 
    }
    while (n > 0) {
        n /= 10;
        l++;
    }
    return l;
}
//Zadacha 9
int kthDigit(int number, int k) {
    int length = numberLength(number);
    if (k > length || k < 0) { 
        return 0; 
    }
    else {
        int j = length - k;
        for (int i = 0; i < j; i++) {
            number /= 10;
        }
        k = number % 10;
        std::cout << k << std::endl;
        return k;
    }
}
//Zadacha 10
bool isSquare(int number) {
    /*bool cond = false;
    for (int i = 0; i <= sqrt(number); i++) {
        if (i * i == number) {
            cond = true;
            break;
        }
    }
    return cond;*/
    if (sqrt(number) - (int)sqrt(number) == 0.0) {
        return true;
    }
    else {
        return false;
    }
}
//Zadacha 12
int LCM(int a, int b) {
    int minab = a > b ? b : a;
    int maxab = a > b ? a : b;

    int LCMab = maxab;
    while (LCMab % minab != 0) {
        LCMab += maxab;
    }
    return LCMab;
}
int LCMThreeNumbers(int a, int b, int c) {
    int LCMab = LCM(a, b);
    int LCMabc = LCM(LCMab, c);
    return LCMabc;
}
//Zadacha 13
long long concat(int first, int second) {
    int length = numberLength(second);
    long long result = (long long)first;
    for (int i = 0; i < length; i++) {
        result *= 10;
    }
    result += (long long)second;
    return result;
}
//Zadacha 14
bool isInInterval(int a, int lower, int upper) {
    return (a >= lower && a <= upper);
}
void askUser(int from, int to) {
    int number;
    std::cin >> number;
    while (!isInInterval(number, from, to)) {
        std::cout << "Not in interval. Try again: ";
        std::cin >> number;
    }
    std::cout << "Success! " << number;
}
//Zadacha 14 (drugata)
long long pow(int number, unsigned N) {
    int n = number;
    for (int i = 1; i < N; i++) {
        number *= n;
    }
    return number;
}
//Zadacha 15
int calculate(int a, int b, char action) {
    switch (action) {
    case '-':
        return a - b;
    case '*':
        return a * b;
    case '/':
        return a / b;
    case '%':
        return a % b;
    default:
        return a + b;
    }
}
//Zadacha 16
int GCD(int a, int b) {
    int lcm = LCM(a, b);
    int prod = a * b;
    prod /= lcm;
    return prod;
}
int GCDFourNumbers(int a, int b, int c, int d) {
    int GCDab = GCD(a, b);
    int GCDabc = GCD(GCDab, c);
    int gcd = GCD(GCDabc, d);
    return gcd;
}

//Zadacha 17
bool validInput(int a) {
    const int L_BOUND = 100;
    const int U_BOUND = 100000;
    return ( (L_BOUND <= a) && (a <= U_BOUND) );
}
int closestPowerOfTwo(int a) {
    while (!validInput(a)) {
        std::cout << "Invalid number. Please try again: ";
        std::cin >> a;
    }
    int powerOfTwo = 1;
    while (powerOfTwo < a) {
        powerOfTwo *= 2;
    }
    int prevPowerOfTwo = powerOfTwo / 2;
    return (a - prevPowerOfTwo) > (powerOfTwo - a) ? powerOfTwo : prevPowerOfTwo;
}
//Zadacha 18
bool isPrime(int n) {
    if (n == 1) return false;
    else if (n == 2) return true;
    else {
        int u_bound = sqrt(n);
        for (int i = 2; i <= u_bound; i++) {
            if (n % i == 0) return false;
        }
    }
    return true;
}
void printAllPrimes(int n) {
    for (int i = 2; i <= n; i++) {
        if (isPrime(i)) {
            std::cout << i << " ";
        }
    }
}
bool sumOfPrimes(int n) {
    if (n % 2 == 1) {
        int t = n - 2;
        if (isPrime(t)) { 
            return true; 
        }
        else {
            return false;
        }
    }
    else {
        int halfN = n / 2;
        for (int i = 3; i <= halfN; i++) {
            int remainder = n - i;
            if (isPrime(i) && isPrime(remainder)) { 
                return true;
            }
        }
        return false;
    }
}
//Zadacha 19
int digitSum(int n) {
    int sum = 0;
    while (n > 0) {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}
int singleDigitDigitSum(int n){
    while (n > 10) {
        n = digitSum(n);
    }
    return n;
}
