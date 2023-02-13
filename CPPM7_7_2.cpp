#include "CPPM7_7_2.h"
#define SUB(a, b) \
	((a) - (b))

void CPPM7_7_2() {
	int a = 6;
	int b = 5;
	int c = 2;
	std::cout << SUB(a, b) << std::endl;
	std::cout << SUB(a, b) * c << std::endl;
	std::cout << SUB(a, b + c) * c << std::endl;
}