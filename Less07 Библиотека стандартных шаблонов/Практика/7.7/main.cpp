#include <iostream>
#include <clocale> 
#include <deque>  //включает в себя все тоже самое что vector + list

using std::cout;
using std::endl;

int main() {
    setlocale(LC_ALL, "Russian");
    
    	std::deque<int> nums = { 5, 7, 3, 4, 8 };
	std::deque<int>::iterator iter;
	//nums[1] = 56;
	//cout << nums.back() << endl;

	/*nums.push_back(34);
	nums.push_front(34);
	nums.pop_back();*/
	iter = nums.begin();
	iter += 2;
	//nums.erase(iter);
	nums.insert(iter, 567); //вставка со смещением
	for (int el : nums)
		cout << el << endl;


    return 0;
}