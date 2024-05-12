#include <iostream>
#include <clocale>
#include <list>

using std::cout;
using std::endl;

int main() {
	setlocale(LC_ALL, "Russian");
	
	std::list<int> numbers = {5, 7, 3, 8, 4};
	std::list<int>::iterator iter;
	/*cout << numbers.front() << endl;
	cout << numbers.back() << endl;*/
	//numbers.sort();
	//cout << numbers.size();
	numbers.push_front(51);
	numbers.push_back(510);

	numbers.pop_front();
	numbers.pop_back();
	numbers.resize(20);
	//numbers.clear();

	iter = numbers.begin();

	while (iter != numbers.end()) {
		cout << *iter << endl;
		iter++;
	}

	return 0;
}