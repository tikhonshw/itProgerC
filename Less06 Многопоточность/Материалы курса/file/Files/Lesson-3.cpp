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
//std::mutex m;
std::timed_mutex m;

void increase() {
	
	//m.lock();
	//if (m.try_lock()) {
	if(m.try_lock_for(std::chrono::milliseconds(200))) {
		std::this_thread::sleep_for(1s);
		num++;
		num++;
		m.unlock();
	}
}

int main() {
	setlocale(LC_ALL, "Russian");

	thread t1(increase);
	thread t2(increase);
	t1.join();
	t2.join();
	cout << num;

	return 0;
}