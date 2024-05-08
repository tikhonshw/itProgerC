#include <iostream>
#include <clocale>
#include <string>
#include "4.3_my_math.h"


using std::string;
using std::cout;
using std::endl;

typedef float car_speed;
typedef int main_func_result;

main_func_result main() {
	setlocale(LC_ALL, "rus");

	MyMath my_math(5, 7);
	my_math.add();
	my_math.mult();

	float num = 7.0f;
	car_speed  num1 = 6.0f;


	return 0;
}
