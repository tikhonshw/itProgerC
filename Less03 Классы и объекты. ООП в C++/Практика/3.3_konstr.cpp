#include <iostream>
#include <clocale> 
#include <cstring> 

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
    Person() {};
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
        this-> age += age;
        return *this;
    }

    ~Person() {
        cout << "Person: " << name << " deleted!!" << endl;
    }
    
};

//конструкторы
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
    this->isHappy = isHappy;
}
void Person::set_hobby(string* p, int n) {
    for (int i = 0; i < n; i++) {
        this->hobbies[i] = *(p + i);
    }
}
void Person::get_hobby() {
    for (int i = 0; i < 3; i++) {
        cout << hobbies[i] << "\t" << i << endl;
    }
}


int main() {
    setlocale(LC_ALL, "rus"); 

    Person alex;
    alex.set_data("Alex", 25, true);

    Person* p_alex = &alex;
    cout << p_alex->get_age() <<endl;
    
    Person carl;
    carl.set_data("Carl", 43);
    // alex.name = "Alex";
    // alex.age = 25;
    // alex.isHappy = true;
    string hobbies[] = {"skate", "paint", "footbal"};
    string* p = hobbies;

    Person john = Person("John", 22, false, p, 3);
    john.get_hobby();
    john.increase_age(1);
    cout << "John age is: " << john.get_age() << endl;

    Person bob;
    // bob.name = "Bob";
    // bob.age = 44;
    // bob.isHappy = false;
    // string hobbies[] = {"skate", "paint", "footbal"};
    // string* p = hobbies;
    bob.set_hobby(p, 3);
    bob.get_hobby();

    Person* max = new Person;
    // max->isHappy = false;
    max->set_data("Max", 75);
    cout << max->get_name() << endl;
    delete max;

    cout << alex.get_name() << endl;
    cout << carl.get_name() << endl;
    cout << bob.get_name() << endl;


    return 0;
} 