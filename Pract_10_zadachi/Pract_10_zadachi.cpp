#include <iostream>

//Zadacha 2
bool isLower(char a) {
    return ('a' <= a && a <= 'z');
}

bool isUpper(char a) {
    return ('A' <= a && a <= 'Z');
}

char letterToUpper(char a) {
    int dif = 'a' - 'A';
    if (isLower(a)) {
        a -= dif;
    }
    return a;
}

char letterToLower(char a) {
    int dif = 'a' - 'A';
    if (isUpper(a)) {
        a += dif;
    }
    return a;
}

//Zadacha 3
void sort3(int& min, int& mid, int& max) {
    //?? dovurshi
}

//Zadacha 4
void reduceFraction(int& a, int& b) {

}

//Zadacha 5
void printArray(int length) {
    int* arr = new int[length];
    int* ptr = arr;
    for (int i = 0; i < length; i++) {
        std::cin >> *ptr;
        ptr++;
    }
    ptr = arr;
    for (int i = 0; i < length; i++) {
        std::cout << *ptr;
        ptr++;
    }
}

int main()
{
    printArray(10);

}
