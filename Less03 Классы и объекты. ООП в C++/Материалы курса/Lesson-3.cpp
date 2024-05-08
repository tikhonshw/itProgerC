#include <iostream>
#include <clocale>
#include <string>

using std::string;
using std::cout;
using std::endl;

class Person {
private:
	string name, type;
	bool isHappy;
	string hobbies[3];
	int age;

public:
	
	Person() {}
	explicit Person(string name, int age, bool isHappy, string type);
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

class Weapon {};

class Player final : public Person {
private:
	string magic_power;
public:
	Player(string name, int age, bool isHappy, string type, string magic) : Person(name, age, isHappy, type) {
		this->magic_power = magic;
	}

	Player() {}
};

class Enemy : public Person {

};

// class Bot : public Player {};

int main() {
	setlocale(LC_ALL, "Russian");
	
	Player alex("Alex", 25, true, "player", "heal");
	cout << alex.get_name();
	Enemy bob;//("Bob", 28, true, "enemy");
	
	return 0;
}

Person::Person(string name, int age, bool isHappy, string type) {
	set_data(name, age, isHappy);
	this->type = type;
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