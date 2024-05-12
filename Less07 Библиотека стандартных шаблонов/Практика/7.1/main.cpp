#include <iostream>
#include <clocale>
#include "my_array.cpp"

int main() {
    setlocale(LC_ALL, "Russian");
    
    my_array<int> intArr(10);

    for (int i = 0; i <intArr.get_length(); i++) {
        intArr[i] = i * i;
    }

    intArr[2] = 123;

    intArr.print();
    intArr.resize(4);
    intArr.print();
    intArr.empty();
    intArr.print();


    return 0;
}