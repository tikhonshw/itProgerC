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
    void printHash(int line, int cZnak) {
        for (int i = 0; i < line; i++) {
            for (int j = 0; j < cZnak; j++) {
                // std::this_thread::sleep_for(50ms);
                fflush(stdout);
                cout << "#";
                std::this_thread::sleep_for(100ms);
                

            }
            cout << endl;
        }
    }
};

int main() {
    Paint paint;
    cout << "Запуск метода в обычном потоке:\n\n";

    // Запуск метода в обычном потоке
    thread t1(&Paint::printHash, paint, 4, 7);
    t1.join();

    cout << "\n\nЗапуск метода через std::async:\n\n";

    // Запуск метода через std::async
    std::future<void> future = std::async(&Paint::printHash, &paint, 5, 3);
    future.get();

    return 0;
}