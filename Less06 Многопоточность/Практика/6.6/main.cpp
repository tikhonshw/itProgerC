#include <iostream>
#include <clocale>
#include <thread>
#include <chrono>
#include <mutex>
#include <condition_variable>

using std::cout;
using std::endl;
using std::thread;
using namespace std::chrono_literals;

int score = 0;
std::mutex m;
std::condition_variable cv;

void add_score(int amount) {
    std::lock_guard<std::mutex> lg(m);
    std::this_thread::sleep_for(500ms);

    score += amount;
    cout << "1) Score is: " << score << endl;

}

void check_score() {
    std::unique_lock<std::mutex> ul(m);

    cv.wait(ul, [] () { return score > 50; } );
    cout << "2) Score is: " << score << endl;

}

void increase() {
    std::this_thread::sleep_for(700ms);

    score += 50;
    cout << "3) Score is: " << score << endl;
    cv.notify_one();
}

int main() {
	setlocale(LC_ALL, "Russian");

    thread t1(add_score, 51);
    thread t2(check_score);
    thread t3(increase);
    t1.join();
    t2.join();
    t3.join();


	return 0;
}