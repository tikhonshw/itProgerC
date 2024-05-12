#include <iostream>
#include <clocale>
#include <vector>

using std::cout;
using std::endl;

int main() {
	setlocale(LC_ALL, "Russian");

	std::vector<float> nums{ 5.6f, 7.5f, 7.57f, 7.235f };
	std::vector<float>::iterator iter = nums.begin();

	/*cout << *iter << endl;
	iter++;
	iter--;
	cout << *iter << endl;*/

	while (iter != nums.end()) {
		cout << *iter << endl;
		iter++;
	}

	return 0;
}