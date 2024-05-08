#include <iostream>
#include "my_math.h"


MyMath::MyMath(int x, int z) {
	this->x = x;
	this->z = z;
}

[[deprecated]]
void MyMath::add() {
	std::cout << (x + z) << std::endl;
}

[[noreturn]]
void MyMath::divide() {
	std::cout << (x + z) << std::endl;
}

void MyMath::mult() {
	std::cout << (x * z) << std::endl;
}

void MyMath::minus() {
	std::cout << (x - z) << std::endl;
}