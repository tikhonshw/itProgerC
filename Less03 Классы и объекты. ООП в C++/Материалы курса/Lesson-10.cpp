#include <iostream>
#include <clocale>
#include <string>

using std::string;
using std::cout;
using std::endl;

class User {
public:
	static int count;

	User() {
		count++;
		cout << "Count: " << count << endl;
	}
};

int User::count = 0;

class MyMath {
public:
	static void add(int a, int b) {
		cout << (a + b) << endl;
	}
};

int main() {
	setlocale(LC_ALL, "Russian");

	User bob, alex, john;
	bob.count = 25;
	//User::count = 10;
	cout << "Count: " << alex.count << endl;

	MyMath::add(5, 7);

	return 0;
}