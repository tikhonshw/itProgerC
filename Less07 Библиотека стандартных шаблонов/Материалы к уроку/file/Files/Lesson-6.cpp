#include <iostream>
#include <clocale>
#include <forward_list>

using std::cout;
using std::endl;

int main() {
	setlocale(LC_ALL, "Russian");
	
	std::forward_list<int> nums{5, 7, 2, 5, 3};
	int first = nums.front();
	nums.pop_front();
	nums.push_front(56);
	nums.clear();
	//if(nums.empty())
	//nums.resize(2);
	for (int el : nums) {
		cout << el << endl;
	}

	return 0;
}