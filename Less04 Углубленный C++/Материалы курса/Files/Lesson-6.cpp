#include <iostream>
#include <clocale>
#include <string>

using std::string;
using std::cout;
using std::endl;

template <typename T1, typename T2>
T2 average(T1* nums, int n) {
	T2 summa = 0;
	for (int i = 0; i < n; i++)
		summa += *(nums + i);
	
	return summa / n;
}

int main() {
	setlocale(LC_ALL, "Russian");

	int nums[] = { 5, 7, 8, 3 };
	cout << average<int, float>(nums, 4) << endl;

	float nums1[] = { 5, 7, 8, 3 };
	cout << average<float, double>(nums1, 4) << endl;
	
	return 0;
}