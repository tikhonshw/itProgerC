#include <iostream>
#include "4.3_my_math.h"




MyMath::MyMath(int x, int z) {
	this->x = x;
	this->z = z;
}



[[deprecated]]
void MyMath::add() {
    std::cout << ( x + z ) << std::endl;
} 
void MyMath::divite() {
    std::cout << ( x + z ) << std::endl;
}

void MyMath::mult() {
    std::cout << ( x * z ) << std::endl;
}

void MyMath::minus() {
    std::cout << ( x - z ) << std::endl;
}
