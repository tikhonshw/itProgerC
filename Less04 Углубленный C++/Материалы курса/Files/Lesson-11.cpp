#include <iostream>
#include <clocale>
#include <string>

using std::string;
using std::cout;
using std::endl;

[[deprecated("Используйте метод cout")]]
void print() { cout << "some"; }

auto main() -> int {
	setlocale(LC_ALL, "Russian");
	print();
	int x = 3;
	constexpr int n = 5;
	int num[n];

	string word = "hello";
	cout << word.ends_with("llo");

	return 0;
}