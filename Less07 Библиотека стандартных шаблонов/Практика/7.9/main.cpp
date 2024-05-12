#include <iostream>
#include <clocale>
#include <stack>
#include <queue>

using std::cout;
using std::endl;

int main() {
	setlocale(LC_ALL, "Russian");
	
	std::stack<int> nums;
	nums.push(5);
	nums.push(50);
	nums.push(500);

	/*cout << nums.top() << endl;
	nums.pop();
	cout << nums.top() << endl;*/

	/*while (!nums.empty()) {
		cout << nums.top() << endl;
		nums.pop();
	}*/

	std::queue<int> numbers;
	numbers.push(5);
	numbers.push(50);
	numbers.push(500);

	//cout << numbers.front() << endl;

	while (!numbers.empty()) {
		cout << numbers.front() << endl;
		numbers.pop();
	}

	return 0;
}