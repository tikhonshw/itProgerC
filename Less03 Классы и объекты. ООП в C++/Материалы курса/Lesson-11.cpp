#include <iostream>
#include <clocale>
#include <string>

using std::string;
using std::cout;
using std::endl;

class Car {
private:
	float speed;
	string model;

	class Engine {
	private:
		int horse_power;
		string model;
	public:
		Engine(int horse_power, string model) {
			this->horse_power = horse_power;
			this->model = model;
		}

		Engine() {}

		void start() {
			cout << "Start engine" << endl;
		}

		void turn_off() {
			cout << "Off the engine" << endl;
		}
	};

	Engine* engine;

public:
	Car(float speed, string model, int hp, string engine_model) {
		this->speed = speed;
		this->model = model;
		engine = new Engine(hp, engine_model);
	}

	Engine* get_engine() {
		return engine;
	}

};

int main() {
	setlocale(LC_ALL, "Russian");

	Car bmw(250.0f, "BMW M5", 500, "V8");
	bmw.get_engine()->start();
	bmw.get_engine()->turn_off();

	/*Car::Engine v8(500, "V8");
	v8.start();
	v8.turn_off();*/


	return 0;
}