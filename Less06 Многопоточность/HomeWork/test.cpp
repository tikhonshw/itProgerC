#include <iostream>
#include <chrono>
#include <thread>

int main() {
    int delay = 1000; // Задержка в миллисекундах
    int repetitions = 50; // Количество повторений

    // for (int i = 0; i < repetitions; i++) {
    //     std::cout << "#";
    //     std::this_thread::sleep_for(std::chrono::milliseconds(delay));
    // }

    std::cout << "#";
    std::this_thread::sleep_for(std::chrono::milliseconds(delay));
    fflush(stdout);

    std::cout << "\b#";
    std::this_thread::sleep_for(std::chrono::milliseconds(delay));
    fflush(stdout);

    std::cout << "#";
    std::this_thread::sleep_for(std::chrono::milliseconds(delay));
    fflush(stdout);

    std::cout << "#";
    std::this_thread::sleep_for(std::chrono::milliseconds(delay));
    fflush(stdout);

    std::cout << "\b\b#";
    std::this_thread::sleep_for(std::chrono::milliseconds(delay));
    fflush(stdout);

    std::cout << "#";
    std::this_thread::sleep_for(std::chrono::milliseconds(delay));
    fflush(stdout);


    std::cout << std::endl;

    return 0;
}