#include <iostream>
#include <clocale>
#include <string>

using std::cout;
using std::endl;
using std::string;

class Drink;

class Person {
    friend void check_person(Person& person, Drink& drink);
    private:
        int age;
        string name;
    public:
        Person(int age, string name) {
            this->age = age;
            this->name = name;
        }
};

class Drink {
    friend void check_person(Person& person, Drink& drink);
    private: 
        string name;
        bool is_spirit;
    public:
        Drink(bool is_spirit, string name) {
            this->is_spirit = is_spirit;
            this->name = name;
        }
};

void check_person(Person& person, Drink& drink) {
    if (drink.is_spirit && person.age < 18) {
        cout << person.name << " еще слишком молодой для алкоголя " << drink.name << endl;
    } else {
        cout << person.name << " алкоголь " << drink.name << " доступен " << endl;
    }
}

int main() {
	setlocale(LC_ALL, "rus");

    Person alex(55, "Alex");
    Drink viski(true, "Viski");

    check_person(alex, viski);

	return 0;
}
