#include <iostream>
#include <clocale> 
#include <cstring> 

using std::string;
using std::cout;
using std::endl;

class Person {
    public:
        string name;
        int age;
        bool isHappy;
        string hobbies[3];
    
    void set_data(string name, int age, bool isHappy);
    void set_data(string name, int age);
    void set_hobby(string* p, int n);
    void get_hobby();


};

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

strcp

int main() {
    setlocale(LC_ALL, "rus"); 

    Person alex;
    alex.set_data("Alex", 25, true);

    Person* p_alex = &alex;
    cout << p_alex->age <<endl;
    
    Person carl;
    carl.set_data("Carl", 43);
    // alex.name = "Alex";
    // alex.age = 25;
    // alex.isHappy = true;

    Person bob;
    bob.name = "Bob";
    bob.age = 44;
    bob.isHappy = false;
    string hobbies[] = {"skate", "paint", "footbal"};
    string* p = hobbies;
    bob.set_hobby(p, 3);
    bob.get_hobby();

    Person* max = new Person;
    max->isHappy = false;
    max->set_data("Max", 75);
    cout << max->name << endl;
    delete max;

    cout << alex.name << endl;
    cout << carl.name << endl;
    cout << bob.name << endl;


    return 0;
} 