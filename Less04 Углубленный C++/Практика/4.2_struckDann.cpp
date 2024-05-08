#include <iostream>
#include <clocale>
#include <string>

using std::string;
using std::cout;
using std::endl;

struct computer_app {
public:
	string name;
	bool is_install;

	computer_app() {}

	computer_app(string name, bool is_install) {
		this->name = name;
		this->is_install = is_install;
	}

	void print_info() {
		cout << "App " << name << ". Is install: " << (is_install ? "yes" : "no") << endl;
	}
};

class Computer {
private:
	string OS;
	int diagonal, ssd, len;
	computer_app* apps = nullptr;
public:
	Computer(string OS, int diagonal, int ssd) {
		this->OS = OS;
		this->diagonal = diagonal;
		this->ssd = ssd;
	}

	void set_apps(computer_app* app, int len) {
		if (apps != nullptr)
			return;

		this->len = len;
		apps = new computer_app[this->len];
		for (int i = 0; i < this->len; i++)
			*(apps + i) = *(app + i);
	}

	void get_apps() {
		for (int i = 0; i < len; i++)
			(apps + i)->print_info();
	}

	~Computer() {
		delete[] apps;
		apps = nullptr;
	}
};

int main() {
	setlocale(LC_ALL, "Russian");

	Computer mac("Mac", 15, 256);

	computer_app finder("Finder", true);
	computer_app photoshop("PhotoShop", false);

	computer_app apps[] = { finder, photoshop };
	mac.set_apps(apps, 2);
	mac.get_apps();

	return 0;
}