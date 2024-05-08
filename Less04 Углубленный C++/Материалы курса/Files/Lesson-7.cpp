#include <iostream>
#include <clocale>
#include <string>
#include <functional>

using std::string;
using std::cout;
using std::endl;
using std::function;

int add(int x, int y) {
	return x + y;
}

int minus(int x, int y) {
	return x - y;
}

void print_error(string(*func)()) {
	cout << func() << endl;
}

string console_write() {
	return "console write";
}

string file_write() {
	return "file write";
}

void bigger_than5(int el) {
	if (el > 5)
		cout << el << endl;
}

void not_zero(int el) {
	if (el != 0)
		cout << el << endl;
}

void arr_work(int* nums, int n, void(*func)(int)) {
	for (int i = 0; i < n; i++)
		func(nums[i]);
}

int main() {
	setlocale(LC_ALL, "Russian");

	int(*my_math)(int, int);
	my_math = minus;
	cout << my_math(6, 7) << endl;

	print_error(file_write);
	
	function<int(int, int)> f;
	f = minus;
	cout << f(6, 7) << endl;

	int nums[] = { 5, 7, 2, 0, 3, 0, 7, 3, 93 };
	arr_work(nums, 9, not_zero);

	return 0;
}