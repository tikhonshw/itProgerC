#include <iostream>
#include <cstdlib>
#include <clocale>
#include <climits>
#include <cmath>

int main() {
    setlocale(LC_ALL, "rus");

    float x,y,z;
    std::cin >> x >> y >> z;
    float res = x + y + z;
    std::cout << "Сумма: " << res << std::endl;

    res = x - y - z;
    std::cout << "Разность: " << res << std::endl;

    res = x * y * z;
    std::cout << "Умножение: " << res << std::endl;

    res = x / y / z;
    std::cout << "Деление: " << res << std::endl;

    res = int(x) % int(y);
    std::cout << "Остаток от деления: " << res << std::endl;

    x = x + 5;
    x += 5;
    x++;

    std::cout << std::min(x,y) << std::endl;
    std::cout << std::max(x,y) << std::endl;
    std::cout << std::sqrt(x) << std::endl;
    std::cout << std::round(x) << std::endl;
    std::cout << std::ceil(x) << std::endl; //округление вверх
    std::cout << std::floor(x) << std::endl; //округление вниз


    return 0;

}
