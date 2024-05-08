#include <iostream>
#include <clocale>
#include <string>


int main() {
    setlocale(LC_ALL, "rus");

    const std::string login = "1", password = "1";

    std::string userLogin, userPass;
    std::cout << "Введите логин: " << std::endl;
    std::getline(std::cin, userLogin);

    std::cout << "Введите пароль: " << std::endl;
    std::getline(std::cin, userPass);

    if (login == userLogin && password == userPass) {
        std::cout << "Авторизация пройдена" << std::endl;
        std::cout << "Введите символ" << std::endl;
        char action;
        std::cin >> action;
        if (action == 'D')
            std::cout << "Выполнено дейстивие D" << std::endl;
            else if (action == 'E')
            std::cout << "Выполнено дейстивие E" << std::endl;
            else std::cout << "не понятно что делать дальше" << std::endl;

    } else {
        std::cout << "Веденная пара не верна" << std::endl;
    }



/*
    short userInput;
    std::cout << "Введите число: " << std::endl;
    std::cin >> userInput;

    if (userInput == 5) {
        std::cout << "Условие верно" << std::endl;
    } else {
        std::cout << "Условие НЕ верно" << std::endl;
    }



    float x = 0.05f;
    int res;
    if (x == 0.05f)
        res = 1;
    esle
        res = 0;
    std::cout << res << std::endl;

    int result = x == 0.05f ? 1 : 0; //тернарный оператор
*/
    return 0;
}
