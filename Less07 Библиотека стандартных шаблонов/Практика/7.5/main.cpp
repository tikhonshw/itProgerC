#include <iostream>
#include <clocale> 
#include <list>

using std::cout;
using std::endl;

int main() {
    setlocale(LC_ALL, "Russian");
    
    std::list<int> numbers = {7, 5, 3, 8, 4};
    // cout << numbers.front() << endl;
    // cout << numbers.back() << endl;
    std::list<int>::iterator iter;
    // numbers.sort();
    numbers.push_front(99);
    numbers.push_back(88);

    numbers.pop_front();
    numbers.pop_back();
    // numbers.clear();
    numbers.resize(2);


    iter = numbers.begin();

    while (iter != numbers.end()) {
        cout << *iter << endl;
        iter++;
    }
    // cout << numbers.size() << endl;


        
    

    return 0;
}