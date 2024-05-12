#include <iostream>
#include <thread>
#include <future>
#include <chrono>

using std::cout;
using std::string;
using std::endl;
using std::thread; 
using namespace std::chrono_literals;


class Paint {
public:
    void printHash() {
        for (int i = 0; i < 4; i++) {
            for (int j = 0; j < 7; j++) {
                std::this_thread::sleep_for(50ms);
                cout << "#";
                std::this_thread::sleep_for(100ms);
            }
            cout << endl;
        }
    }
};

int main() {
    Paint paint;

    // Запуск метода в обычном потоке
    thread t1(&Paint::printHash, paint);
    t1.join();

    // Запуск метода через std::async
    std::future<void> future = std::async(&Paint::printHash, &paint);
    future.get();

    return 0;
}