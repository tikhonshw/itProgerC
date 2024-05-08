//#pragma once // подключение 1 раз
#ifndef MY_MATH
#define MY_MATH

class MyMath {
private:
	int x, z;
public:
	MyMath(int x, int z);
	void add();
	void minus();
	void mult();
	void divite();
};
#endif
