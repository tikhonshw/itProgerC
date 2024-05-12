#include <iostream>
#include <clocale>
#include <thread>
#include <chrono>
#include <mutex>

using std::cout;
using std::endl;
using std::thread;
using namespace std::chrono_literals;

int num = 10;
std::mutex m;

void increase() {
	std::this_thread::sleep_for(1s);
	{
		std::lock_guard<std::mutex> lg(m); // lock();
	//
		num++;
		num++;
		// unlock
	}
	std::this_thread::sleep_for(1s);
}

void increase1() {
	std::unique_lock<std::mutex> ul(m);  // lock();
	num++;
	num++;
	ul.unlock();
	std::this_thread::sleep_for(1s);
} // unlock

std::recursive_mutex rm;

void rec(int num) {
	if (num == 0) return;

	rm.lock();
	cout << num << endl;
	rec(--num);
	rm.unlock();
}

int main() {
	setlocale(LC_ALL, "Russian");

	thread t1(rec, 5);
	thread t2(rec, 4);
	t1.join();
	t2.join();
	cout << num;

	return 0;
}