#include <iostream>
#include <clocale>
#include <string>
#include "my_math.h"

using std::string;
using std::cout;
using std::endl;

typedef float car_speed;
typedef int main_func_result;

main_func_result main() {
	setlocale(LC_ALL, "Russian");

	MyMath my_math(5, 7);
	my_math.add();
	my_math.mult();

	car_speed num = 6.0f;
	int num1 = 6;

	return 0;
}