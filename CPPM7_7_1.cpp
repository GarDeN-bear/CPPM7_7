#include "CPPM7_7_1.h"
#define MODE 1

void CPPM7_7_1() {
#ifndef MODE
#error You need to define MODE
#else
#if (MODE == 0)
	std::cout << "Работаю в боевом режиме\n";
#elif (MODE == 1)
	std::cout << "Работаю в боевом режиме\n";
	int add(int num1, int num2);
int num1, num2;
std::cout << "Введите число 1: ";
std::cin >> num1;
std::cout << "Введите число 2: ";
std::cin >> num2;
std::cout << "Результат сложения: " << add(num1, num2) << '\n';
#endif
#endif
}

int add(int num1, int num2) {
	return num1 + num2;
}