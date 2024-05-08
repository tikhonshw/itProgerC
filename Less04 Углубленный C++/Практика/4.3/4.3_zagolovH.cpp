#include <iostream>
#include <clocale>
#include <string> 

using std::string;
using std::cout;
using std::endl;


void add(int x, int y);
void add(int x, int y, int z);
void mult(int x, int y);
void minus(int x, int y);

int main() {
	setlocale(LC_ALL, "Russian");

    add(5, 6, 8);

	return 0;
}
