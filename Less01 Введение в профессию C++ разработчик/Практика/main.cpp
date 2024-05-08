#include <iostream>
#include <cstdlib>
#include <clocale>
#include <climits>


int main() {
    setlocale(LC_ALL, "rus");
    std::cout << "Привет мир!! Hello World!!" << std::endl;
    std::cout << "\"" << std::endl;

    int number = 200000;
    std::cout << "Переменная int number: " << number << " занимает места в памяти: " << sizeof(number) << " максимальное значение: " << std::endl;

    short num = 2;
    std::cout << "Переменная short num: " << num << " занимает места в памяти: " << SHRT_MAX << std::endl;

    // unsigned // только положительные числа

    long long num3 = 4;

    float num4 = 5.555f;
    double num5 = 6.00006f;

    char sym = 's'; //один символ

    bool isHappy = true;
    std::string str = "строка";

    auto num; // само подбирает тип переменной
    const constNum =

    short num10, num11, res;
    std::cout << "Первое значение: ";
    std::cin >> num10;
    std::cout << "Второе значение: ";
    std::cin >> num11;

    res = num10 + num11;
    std::cout << "Ответ: " << num10 << "+" << num11 << "=" << res << std::endl;

    return 0;
}
