#include <iostream>
#include <clocale>
#include <string>
#include <ctime>
/*
user@laptop:~$ gcc -v -E -x c++ -
*/
using std::cout;
using std::endl;
using std::string;

class Book {
    public:
        void print_info() {
            cout << "Book is ready" << endl;
        }

};
 

int main() {
	setlocale(LC_ALL, "rus"); 
 
    // const int LENTHARR = 3;
    // int* numbers = new int[LENTHARR]{5, 3, 2}; //
    // *(numbers + 2) = 40;
    // for (int i = 0; i < LENTHARR; i++) {
    //     cout << *(numbers + i) << endl;
    // }
    // delete[] numbers;
     
    const int LENTHARR = 3;
    Book book1;
    Book* books = new Book[LENTHARR]{book1, Book()}; 
    *(books + 2) = Book();
    for (int i = 0; i < LENTHARR; i++) {
        (books + 1)->print_info();
    }
    delete[] books;

	return 0;
}
