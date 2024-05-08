#include <iostream>
#include <clocale>
#include <string>

using std::cout;
using std::endl;
using std::string;

class Person;
class Cat {
	friend class Person;
private:
	int health = 100;
};

class Person {
public:
	void damage(Cat& cat) {
		if (cat.health <= 0)
			cout << "Cat life: 0" << endl;
		else {
			cat.health -= 10;
			cout << "Cat life: " << cat.health << endl;
		}
	}

	void heal(Cat& cat) {
		cat.health += 15;
		cout << "Cat life: " << cat.health << endl;
	}
};

int main() {
	setlocale(LC_ALL, "Russian");

	Cat cat;
	Person bob;
	bob.damage(cat);
	bob.damage(cat);
	bob.heal(cat);
	bob.damage(cat);
	bob.heal(cat);
	bob.heal(cat);
	
	return 0;
}