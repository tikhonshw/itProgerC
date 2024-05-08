#include <iostream>
#include <clocale>
#include <string>

using std::string;
using std::cout;
using std::endl;

class Book {
public:
	void print_info() {
		cout << "Book is ready" << endl;
	}
};

int main() {
	setlocale(LC_ALL, "Russian");

	/*const int LENGHT = 3;
	int* numbers = new int[LENGHT]{5, 7, 4};
	*(numbers + 2) = 40;

	for(int i = 0; i < LENGHT; i++)
		cout << *(numbers + i) << endl;

	delete[] numbers;*/

	const int LENGHT = 3;
	Book book1;
	Book* books = new Book[LENGHT]{ book1, Book()};
	*(books + 2) = Book();
	for (int i = 0; i < LENGHT; i++)
		(books + i)->print_info();

	delete[] books;

	return 0;
}