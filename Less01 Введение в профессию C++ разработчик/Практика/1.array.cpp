#include <iostream>
#include <clocale>
#include <string>


int main() {
    setlocale(LC_ALL, "rus");

    int nums[3];

    nums[0] = 4;
    nums[1] = 40;
    nums[2] = 44;

    nums[1]++;
    nums[2] *= 4;

    std::cout << nums[2] << std::endl;

    short numbers[5] = {1, 2, 3, 4, 5};


    return 0;
}


