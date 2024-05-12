#include <iostream>
#include <clocale> 
#include <array>

using std::cout;
using std::endl;

int main() {
    setlocale(LC_ALL, "Russian");
    
    std::array<double, 5> numbers = {3.3f, 4.4f, 7.3f, 8.3f};
    numbers[2] = 1.1f;  // .at аналог []
    cout << numbers.front() << endl;
    cout << numbers.back() << endl;
    numbers.fill(10.100f);
    cout << numbers.back() << endl;
    std::array<double, 5>::iterator iter = numbers.begin();
    cout << *iter << endl;


    return 0;
}