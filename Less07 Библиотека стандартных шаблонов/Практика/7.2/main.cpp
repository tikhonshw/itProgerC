#include <iostream>
#include <clocale> 
#include <vector>

using std::cout;
using std::endl;

int main() {
    setlocale(LC_ALL, "Russian");
    
    std::vector<int> numbers{5, 6, 7, 8, 5}; //[3], [3, 10]
    numbers[3] = 3;
    cout << numbers[3] << endl;
    cout << numbers.at(3) << endl;
    cout << numbers.front() << endl;
    cout << numbers.back() << endl;
    numbers.resize(2);
    for (int i = 0; i < numbers.size(); i++){
        cout << "Elements for resize: " << numbers.at(i) << endl;
    }
    for (int el : numbers) {
        cout << "El:  " << el << endl;

    }

    numbers.push_back(78);
    numbers.push_back(88);
    for (int el : numbers) {
        cout << "El + push:  " << el << endl;

    }
    numbers.emplace_back(99);

    numbers.pop_back(); //удаляет последний элемент
    // numbers.clear(); //очистка массива
    // numbers.empty();
    if (numbers.empty()) {
        cout << "Array is empty" << endl;
    }

    return 0;
}