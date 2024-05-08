#include <iostream>
#include <clocale>
#include <string>


using std::string;
using std::cout;
using std::endl;

enum CarModel {
	BMW,
	Audi,
	Volvo,
	VAZ
};

class Car {
private:
	CarModel model;
public:
	Car(CarModel model) {
		this->model = model;
	}
	CarModel get_model() {
		return model;
	}
};


int main() {
	setlocale(LC_ALL, "Russian");

	Car bmw(BMW);
	if (bmw.get_model() == BMW) {
		cout << "BMW is a model " << endl;
	}

	return 0;
}
