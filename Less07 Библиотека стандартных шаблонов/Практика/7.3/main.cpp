#include <iostream>
#include <clocale> 
#include <vector>

using std::cout;
using std::endl;

int main() {
    setlocale(LC_ALL, "Russian");
    
    std::vector<float> nums{5.6f, 7.7f, 8.8f, 9.9f, 10.10f};
    std::vector<float>::iterator iter = nums.begin();
    // cout << *iter << endl;
    // cout << *(iter + 1) << endl;
    // iter++;
    // iter--;
    // iter +=2;
    // cout << *iter << endl;

    while (iter != nums.end()) {
        cout << *iter << endl;
        iter++;
    }
    

    return 0;
}