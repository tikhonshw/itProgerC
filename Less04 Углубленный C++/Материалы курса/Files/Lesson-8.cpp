#include <iostream>
#include <clocale>
#include <string>
#include <functional>

using std::string;
using std::cout;
using std::endl;
using std::function;

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

	int nums[] = { 5, 7, 2, 0, 3, 0, 7, 3, 93 };
	arr_work(nums, 9, [](int el) {
		if (el > 5)
			cout << "Element is: " << el << endl;
	});

	string word = "hello";
	auto f = [&]() {
		cout << word << " world" << endl;
		word = "some";
	};
	f();
	cout << word;

	return 0;
}