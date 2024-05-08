#include <iostream>
#include <clocale>
#include <thread>
#include <chrono>
#include <mutex>

using std::cout;
using std::endl;
using std::thread;
using namespace std::chrono_literals;

std::mutex m1, m2;

void func1() {
	m1.lock();
	std::this_thread::sleep_for(100ms);
	m2.lock();
	cout << "some 1" << endl;
	m2.unlock();
	m1.unlock();
}

void func2() {
	m1.lock();
	m2.lock();
	cout << "some 2" << endl;
	m2.unlock();
	m1.unlock();
}

int main() {
	setlocale(LC_ALL, "Russian");

	thread t1(func1);
	thread t2(func2);
	t1.join();
	t2.join();

	return 0;
}