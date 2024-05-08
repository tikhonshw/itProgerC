#include <iostream>
#include <clocale>
#include <string>

using std::string;
using std::cout;
using std::endl;

class IError {
protected:
	virtual void write_error(char* mess) = 0;
};

class FileWork : IError {
public:
	virtual void write_error(char* mess) {
		cout << "Log error to file: " << mess;
	}
};

class ConsoleWork : IError {
public:
	virtual void write_error(char* mess) {
		cout << "Log error to console: " << mess;
	}
};

class DbWork : IError {
public:
	virtual void write_error(char* mess) {
		cout << "Log error to db: " << mess;
	}
};

int main() {
	setlocale(LC_ALL, "Russian");

	FileWork obj;
	char words[] = "some";
	obj.write_error(words);

	return 0;
}