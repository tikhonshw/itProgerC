#include <iostream>
#include <clocale>
#include <thread>

using std::cout;
using std::endl;
using std::thread;

void func(int& x) {
	cout << x << endl;
	x = 50;
}

class Some {
public:
	void print(int till) {
		int i = 0;
		while (i++ < till) {
			cout << i << endl;
		}
	}

	static void info(int till) {
		int i = 0;
		while (i++ < till) {
			cout << i << endl;
		}
	}

	void operator() (int till) {
		int i = 0;
		while (i++ < till) {
			cout << i << endl;
		}
	}
};

int main() {
	setlocale(LC_ALL, "Russian");

	int x = 20;
	thread t1(func, std::ref(x));
	t1.join();
	cout << x << endl;

	auto f = []() {
		int i = 0;
		while (i++ < 2) {
			cout << i << endl;
		}
	};
	thread t2(f);
	t2.join();

	Some some;
	thread t3(&Some::print, &some, 3);
	t3.join();

	thread t4(Some(), 5);
	t4.join();

	thread t5(Some::info, 5);
	t5.join();

	return 0;
}