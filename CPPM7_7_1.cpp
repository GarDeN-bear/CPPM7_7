#include "CPPM7_7_1.h"
#define MODE 1

void CPPM7_7_1() {
#ifndef MODE
#error You need to define MODE
#else
#if (MODE == 0)
	std::cout << "������� � ������ ������\n";
#elif (MODE == 1)
	std::cout << "������� � ������ ������\n";
#define add(num1, num2) \
	((num1) + (num2))
int num1, num2;
std::cout << "������� ����� 1: ";
std::cin >> num1;
std::cout << "������� ����� 2: ";
std::cin >> num2;
std::cout << "��������� ��������: " << add(num1, num2) << '\n';
#endif
#endif
}