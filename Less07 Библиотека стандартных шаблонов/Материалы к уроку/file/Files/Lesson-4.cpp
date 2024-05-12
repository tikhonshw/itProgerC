#include <iostream>
#include <clocale>
#include <array>

using std::cout;
using std::endl;

int main() {
	setlocale(LC_ALL, "Russian");
	
	std::array<double, 5> numbers = {5.5f, 6.4f, 6.45f};
	std::array<double, 5>::iterator iter = numbers.begin();
	numbers[4] = 56.6746f;
	//numbers.front();
	numbers.fill(10.001f);
	//cout << numbers.back() << endl;
	//iter -= 3;
	cout << *iter;

	return 0;
}