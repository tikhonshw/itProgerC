#include <iostream>
#include <clocale>
#include <string>
#include <ctime>

using std::cout;
using std::endl;
using std::string;

template <typename T1, int len>
class WorkArrays {
private:
	T1* arr;
public:
	WorkArrays() {
		arr = new T1[len];
	}

	~WorkArrays() {
		delete[] arr;
	}

	void put_elements() {
		for (int i = 0; i < len; i++) {
			*(arr + i) = rand() % 100;
			cout << *(arr + i) << endl;
		}
	}

	int minimum() {
		int min = *arr;
		for (int i = 0; i < len; i++) {
			if (*(arr + i) < min)
				min = *(arr + i);
		}
		return min;
	}
};

int main() {
	setlocale(LC_ALL, "Russian");
	srand(time(NULL));

	WorkArrays<int, 7> int_nums;
	int_nums.put_elements();
	cout << "Minimum: " << int_nums.minimum() << endl;

	WorkArrays<float, 13> float_nums;
	float_nums.put_elements();
	cout << "Minimum: " << float_nums.minimum() << endl;

	WorkArrays<double, 5> double_nums;
	double_nums.put_elements();
	cout << "Minimum: " << double_nums.minimum() << endl;
	
	return 0;
}