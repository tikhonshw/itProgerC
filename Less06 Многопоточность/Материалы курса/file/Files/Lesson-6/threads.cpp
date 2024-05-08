#include <iostream>
#include <clocale>
#include <thread>
#include <chrono>
#include <mutex>
#include <future>

using std::cout;
using std::endl;
using std::thread;
using namespace std::chrono_literals;

int number;

int number_work(int value) {
	std::this_thread::sleep_for(2s);
	number = value;
	return number;
}

int main() {
	setlocale(LC_ALL, "Russian");

	std::future<int> future = std::async(std::launch::deferred, number_work, 50);
	cout << future.get();

	return 0;
}