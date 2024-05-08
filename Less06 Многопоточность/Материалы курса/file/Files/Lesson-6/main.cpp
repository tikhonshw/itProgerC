//#include <iostream>
//#include <clocale>
//#include <thread>
//#include <chrono>
//#include <mutex>
//#include <future>
//
//using std::cout;
//using std::endl;
//using std::thread;
//using namespace std::chrono_literals;
//
//std::promise<int> number;
//std::future<int> num_future = number.get_future();
//
//void number_work(std::promise<int> num, int value) {
//	std::this_thread::sleep_for(1s);
//	num.set_value(value);
//
//	std::this_thread::sleep_for(10s);
//}
//
//int main() {
//	setlocale(LC_ALL, "Russian");
//
//	thread t1(number_work, std::move(number), 50);
//
//	cout << num_future.get() << endl;
//
//	t1.join();
//
//	return 0;
//}