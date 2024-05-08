#include <iostream>
#include <clocale>
#include <string>

void funcPrint() {
    std::cout << "Вывод из функции" << std::endl;
}

void funcPrintStr(std::string str) {
    std::cout << "Вывод из функции " << str << "!!!" << std::endl;
}

void funcSumm (int a, int b) {
    std::cout << a << "+" << b << "=" << a + b << std::endl;
    funcPrintStr( std::to_string(a + b) );
}
int funcSummReturn(int a, int b) {
    int c = a + b;
    return c;
}

int main() {
    setlocale(LC_ALL, "rus");

    funcPrint();
    funcPrintStr("hey");
    funcSumm( 5, 7 );

    int x = 9;
    int res = funcSummReturn(5, x);
    std::cout << "funcSummReturn: " << res << std::endl;

    return 0;
}



