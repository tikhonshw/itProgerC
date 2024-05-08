#include <iostream>
#include <clocale> 
#include <cstring>

inline void summa( int a, int b );
inline void summa( float a, float b );
inline void summa( std::string* a, std::string* b );

int main() {
    setlocale(LC_ALL, "rus");

    summa(6, 6);
    summa(5.6f, 6.43f);

    std::string hello = "hello", word = "!";
    std::string* p1 = &hello, * p2 = &word;
    summa(p1, p2);

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


