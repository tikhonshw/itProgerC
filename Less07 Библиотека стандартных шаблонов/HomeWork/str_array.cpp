#include <iostream>
#include "str_array.h"
#include <cassert>
#include <cstring>
#include <string>

using std::cout;
using std::endl;
using std::string;

str_array::~str_array() {
    delete[] data;
}

void str_array::add(string el) {
    string* newData = new string[len + 1]; // Создаем новый массив с одним дополнительным элементом
    for (int i = 0; i < len; i++) { // Копируем все элементы в новый массив 
        newData[i] = data[i];
    }
    newData[len] = el; // Добавляем новый элемент в конец массива
    delete[] data; // Удаляем старый массив
    data = newData; // Переопределяем массив
    len++; // Устанавливаем новую длинну массива

    /*
        Да можно выбрать и другие методы работы с массивом
    */
}
 
void str_array::print() {
    cout << "***************************************************" << endl;
    cout << "***      Вывод информации из нового класса      ***" << endl;
    cout << "***************************************************" << endl;
 
    for (int i = 0; i < len; i++) { 
        
        cout << "\t" << (i + 1) << ") " << data[i]  << endl;
    }
    cout << "***************************************************" << endl;
}