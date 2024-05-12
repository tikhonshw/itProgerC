#include <iostream>
#include <clocale> 
#include <forward_list>

using std::cout;
using std::endl;

int main() {
    setlocale(LC_ALL, "Russian");
    
    std::forward_list<int> nums{5,4,6,2};
    int first = nums.front();
    nums.pop_front();
    nums.push_front(55);
    nums.resize(3); // меняет размер, стирает значения на 0
    for (int el : nums) {
        cout << el << endl;
    }

    return 0;
}