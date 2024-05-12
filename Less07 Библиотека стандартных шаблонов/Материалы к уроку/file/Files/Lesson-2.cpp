#include <iostream>
#include <clocale>
#include <vector>

using std::cout;
using std::endl;

int main() {
	setlocale(LC_ALL, "Russian");

	std::vector<int> numbers{5, 6, 7, 5, 4};
	numbers[0] = 7;
	//cout << numbers.at(1) << endl;
	numbers.resize(2);
	numbers.push_back(78);
	numbers.emplace_back(98);
	numbers.pop_back();
	//numbers.clear();
	if (numbers.empty())
		cout << "Empty" << endl;
	for (int el : numbers)
		cout << el << endl;

	return 0;
}