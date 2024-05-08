#include <iostream>
#include <clocale>
#include <string>
#include "my_math.h"

using std::string;
using std::cout;
using std::endl;

int main() {
	setlocale(LC_ALL, "rus");

	add(5, 6, 8);

	return 0;
}