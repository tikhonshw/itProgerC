#include <iostream>
#include <clocale>
#include <algorithm>
#include <vector>
#include <ranges>

using std::cout;
using std::endl;

struct Car {
public:
	float speed, weight;
	std::string model;

	Car(float speed, float weight, std::string model) {
		this->speed = speed;
		this->weight = weight;
		this->model = model;
	}
};

int main() {
	setlocale(LC_ALL, "Russian");
	
	std::vector<Car> cars{ 
		Car(200.05f, 2.01f, "BMW"),
		Car(150.05f, 3.01f, "Truck"),
		Car(350.05f, 1.01f, "Bugatti"),
	};
	//auto res = std::find(cars.begin(), cars.end(), 30);
	auto res = std::find_if(cars.begin(), cars.end(), [](const Car& car) {
		return car.speed > 170.05f && car.weight < 2.0f;
	}); // find_if_not
	if (res == cars.end())
		cout << "Not found";
	else
		cout << "Found. " << res->model << endl;

	auto output = cars | std::views::filter([](const Car& car) {
		return car.speed > 200.0f;
	});

	std::for_each(begin(cars), end(cars), [](Car& car) {
		cout << car.model << endl;
	});

	/*for (auto el : output)
		cout << el.model << endl;*/

	std::sort(cars.begin(), cars.end(), [](const Car& a, const Car& b) {
		return a.speed < b.speed;
	});
	cout << "--------------" << endl;
	std::for_each(begin(cars), end(cars), [](Car& car) {
		cout << car.model << endl;
	});

	std::vector<Car> cars2;

	std::copy_if(cars.begin(), cars.end(), std::back_inserter(cars2), [](const Car& a) {
		return a.speed > 200.0f;
	});
	cout << "--------------" << endl;
	for (auto el : cars2)
		cout << el.model << endl;


	auto out2 = std::remove_if(cars.begin(), cars.end(), [](const Car& a) {
		return a.speed > 200.0f;
	});
	cars.erase(out2, cars.end());
	cout << "--------------" << endl;
	for (auto el : cars)
		cout << el.model << endl;

	return 0;
}