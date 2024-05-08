#include <iostream>
#include <clocale>
#include <string>
#include <cmath>
#include <climits> 

int main() {
    setlocale(LC_ALL, "rus");

    //Напишите программу на C++, что будет высчитывать сумму чисел кратных 3 или 5. Числа должны быть от 0 до 1000.
    int userRej, userNumForFirstCase;
    int res = 0;
    //int i = 0, j = 0;
    int x[3][3] = { {20, 34, 2}, {9, 12, 18}, {3, 4, 5} };
    int lenMass = 0;
    int minRes = INT_MAX;

    std::cout << "Программа выполняет две функции:\n" << std::endl;
    std::cout << "1. Высчисление суммы чисел кратных 3 или 5." << std::endl;
    std::cout << "2. Поиск минимального значения в двумерном массиве (массив задан)\n" << std::endl;
    std::cout << "Ваш выбор: " << std::endl;
    std::cin >> userRej;

    switch(userRej) {
        case 1:
            std::cout << "********************************************************" << std::endl;
            std::cout << "**     1. Высчисление суммы чисел кратных 3 или 5.    **" << std::endl;
            std::cout << "********************************************************" << std::endl;
            std::cout << "Число до которого будет произведено вычисление:" << std::endl;
            std::cin >> userNumForFirstCase;

            for (int i = 0; i <= userNumForFirstCase; i++) {
                if (i % 3 == true || i % 5 == true) {
                    //std::cout << i - 1 << " % 3 = " <<  i - 1 % 3 << std::endl;
                    res += i - 1;
                }
            }
            std::cout << "Сумма чисел кратная 3 и кратная 5 в диапазоне от 0 до " << userNumForFirstCase << " равна: " << res << std::endl;
            break;
        case 2:
            std::cout << "********************************************************\n";
            std::cout << "** 2. Поиск минимального значения в двумерном массиве **\n";
            std::cout << "********************************************************\n";

            for (int i = 0; i < ceil( sizeof(x) / sizeof(*x) ); i++) {
                std::cout << "{ ";
                for (int j = 0; j < ceil( sizeof(x[i]) / sizeof(*x[i]) ); j++) {
                    if (x[i][j] < minRes) minRes = x[i][j];
                    std::cout << "\t" << x[i][j];
                }
                std::cout << "\t}" << std::endl;
            }
            std::cout << "Минимальный число в массиве: " << minRes << std::endl;
            break;
        default:
            std::cout << "не опеделено";
    }

    return 0;
}



