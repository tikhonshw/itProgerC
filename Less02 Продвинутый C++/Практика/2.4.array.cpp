#include <iostream>
#include <clocale> 
#include <cstring>

int minimal( int* a1, int n) {
    int min = *a1;
    for (int i = 0; i < n; i++) {
        if (*(a1 + i) < min) min = *(a1 + i);
    }
    return min;    
} 

int main() {
    setlocale(LC_ALL, "rus");

    int a1[] = {5, 7, 3, 4, 3, 345, 3, -6 };
    int* p_a1 = a1;
    std::cout << minimal(p_a1, sizeof(a1) / sizeof(a1[0])) << std::endl;
    
    int a2[] = {56, 7, 3, 4, 3, 345, 3, -6, -5, -56, 32};
    p_a1 = a2;
    std::cout << minimal(p_a1, sizeof(a2) / sizeof(a2[0])) << std::endl;




    std::cout << std::endl;

    return 0;
}


void summa( int a, int b ) {
    std::cout << (a + b) << std::endl;
}

void summa( float a, float b ) {
    std::cout << (a + b) << std::endl;
}

void summa( std::string* a, std::string* b ) {
    std::cout << (*a + *b) << std::endl;
}


