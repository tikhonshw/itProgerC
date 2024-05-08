#include <iostream>
#include <clocale>
#include <string>
#include <ctime>

using std::cout;
using std::endl;
using std::string;


template <typename T, int len>
class WorkArrays {
    private:
        T* arr; 
    public:
        WorkArrays() { 
            arr = new T[len];
        }
        ~WorkArrays() {
            delete[] arr;
        }

        void put_elements() {
            for(int i = 0; i < len; i++) {
                *(arr + i) = rand() % 100;
                cout << *(arr + i) << endl;
            }
        }
        int min_elements() {
            int min = *arr; //обращение к первому элемнту массива
            for(int i = 0; i < len; i++) {
                if (*(arr + i) < min)
                    min = *(arr + i);
            }
            return min;
        }
};
 

int main() {
	setlocale(LC_ALL, "rus");
    // srand(time_t(NULL));
    srand(time(NULL));
 
    WorkArrays<int, 7> int_nums; 
    int_nums.put_elements();
    cout << "Минимальное значение в массиве: " << int_nums.min_elements() << endl;

    WorkArrays<float, 4> float_nums; 
    float_nums.put_elements();
    cout << "Минимальное значение в массиве: " << float_nums.min_elements() << endl;

    WorkArrays<double, 3> double_nums; 
    double_nums.put_elements();
    cout << "Минимальное значение в массиве: " << double_nums.min_elements() << endl;

	return 0;
}
