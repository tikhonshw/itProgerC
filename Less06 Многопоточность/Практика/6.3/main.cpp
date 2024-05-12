#include <iostream>
#include <clocale>
#include <thread>
#include <chrono>


using std::cout;
using std::string;
using std::endl;
using std::thread;
using namespace std::chrono_literals;

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

	auto start = std::chrono::high_resolution_clock::now();

    int x = 20;
	thread t1(func, std::ref(x));
    t1.join();
	cout << x << endl;

    auto f = []() {
        int i = 0;
        while (i++ < 4) {
	        cout << i << endl;
        }
    }; 
    thread t2(f);
    t2.join();


    Some some;
    thread t3(&Some::print, &some, 4);
    t3.join();
    thread t4(Some(), 3);
    t4.join();

    thread t5(Some::info, 5);
	t5.join();


	return 0;
}