#include <iostream>
#include <clocale>
#include <string>


int main() {
    setlocale(LC_ALL, "rus");

    int user_input;
    std::cin >> user_input;

    switch (user_input) {
        case 5:
            std::cout << "Enter 5";
            break;
        case 50:
            std::cout << "Enter 50";
            break;
        default:
            std::cout << "не опеделено";
    }

    return 0;
}

