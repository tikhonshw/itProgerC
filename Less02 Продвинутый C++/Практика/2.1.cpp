#include <iostream>
#include <clocale>
#include <string>

int main() {
    setlocale(LC_ALL, "rus");

    // ссылка
    int num = 6;
    int& ref = num;
    ref = 10;
    std::cout << &ref << "\t" << &num << std::endl;
    std::cout << ref << "\t" << num << std::endl;
    std::cout << "\n" << std::endl;

    // указатель
    int num2 = 10;
    int* p, *p2;
    p = &num2;
    std::cout << p << "\t"  << *p << std::endl;

    p2 = &num;
    std::cout << &ref << "\t"  << &num << "\t" << p2 << std::endl;

    int *p3 = new int(66);
    *p3 = 10;
    std::cout << *p3 << std::endl;
    delete p3;
    p3 = nullptr;
    if (p3 != nullptr)
        std::cout << "P3: " << *p3 << std::endl;


    int a[] = { 3, 5, 6, 7, 8 };
    int *ptr = a;
    for (int i = 0; i < 5; i++)
        std::cout << ptr[i] + 5 << "\t" << &ptr[i] << std::endl;

    return 0;
}



