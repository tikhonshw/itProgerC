#pragma once
#include <string>

using std::string;

class str_array {
private:
	int len;
	string* data; 
public:

	str_array() : len(0), data(nullptr) {}

	~str_array();

	void add(string el);

	void print();

};