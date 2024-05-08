#include <iostream>
#include <clocale>
#include <thread>
#include <chrono>


using std::cout;
using std::string;
using std::endl;
using std::thread;
using namespace std::chrono_literals;

void nums_work(int till = 30, int str = 0) {
	for (int i = 1; i <= till; i++) {
		cout << i << "\t" << str << endl;
		std::this_thread::sleep_for(200ms);
	}
}

int main() {
	setlocale(LC_ALL, "Russian");

	auto start = std::chrono::high_resolution_clock::now();

	thread t1(nums_work, 50, 1);
	thread t2(nums_work, 40, 2);

	t1.join(); //t1.detach(); 
	t2.join();

	// nums_work();
	// nums_work(40);
	auto stop = std::chrono::high_resolution_clock::now();

	auto duration = std::chrono::duration_cast<std::chrono::microseconds>(stop - start);
	cout << "Seconds: " << duration.count() / 1000000 << endl;

	return 0;
}