#include <iostream>
#include <clocale>
#include <string>

using std::string;
using std::cout;
using std::endl;

class Person {
private:
	string name;
	int age;
	bool isHappy;
	string hobbies[3];

public:

	Person() {}
	Person(string name, int age, bool isHappy);
	Person(string name, int age, bool isHappy, string* p, int n);

	void set_data(string name, int age, bool isHappy);
	void set_data(string name, int age);
	void set_hobby(string* p, int n);
	void get_hobby();

	void set_age(int age) {
		if (age < 1)
			return;

		this->age = age;
	}

	int get_age() {
		return age;
	}

	string get_name() {
		return name;
	}


	Person& increase_age(int age) {
		this->age += age;
		return *this;
	}

	~Person() {
		cout << "Person " << name << " deleted!" << endl;
	}
	
};

Person::Person(string name, int age, bool isHappy) {
	set_data(name, age, isHappy);
}

Person::Person(string name, int age, bool isHappy, string* p, int n) {
	set_data(name, age, isHappy);
	set_hobby(p, n);
}

void Person::set_data(string name, int age, bool isHappy) {
	this->name = name;
	this->age = age;
	this->isHappy = isHappy;
}

void Person::set_data(string name, int age) {
	this->name = name;
	this->age = age;
}

void Person::set_hobby(string* p, int n) {
	for (int i = 0; i < n; i++)
		hobbies[i] = *(p + i);
}

void Person::get_hobby() {
	for (int i = 0; i < 3; i++)
		cout << hobbies[i] << endl;
}

int main() {
	setlocale(LC_ALL, "Russian");
	
	Person alex("Alex", 25, true);
	//alex.set_data("Alex", 25, true);

	Person* p_alex = &alex;
	cout << p_alex->get_age() << endl;

	//alex.name = "Alex";
	//alex.age = 25;
	//alex.isHappy = true;

	string hobbies[] = { "skate", "paint", "football" };
	string* p = hobbies;

	Person bob = Person("Bob", 27, false, p, 3);
	bob.get_hobby();
	bob.increase_age(1).increase_age(5).increase_age(1);
	cout << "Bob age: " << bob.get_age() << endl;

	Person* max = new Person();
	//max->isHappy = false;
	max->set_data("Max", 56);
	cout << max->get_name() << endl;
	delete max;

	cout << alex.get_name() << endl;
	cout << bob.get_name() << endl;
	
	return 0;
}
