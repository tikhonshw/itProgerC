#include <iostream>
#include <clocale>

#include "mysql_connection.h"
#include <cppconn/driver.h>
#include <cppconn/exception.h>
#include <cppconn/prepared_statement.h>

using std::string;
using std::cout;
using std::endl;

const string SERVER = "tcp://localhost:8889"; // 3306
const string USER = "root"; // mysql
const string PASSWORD = "root"; // 

int main() {
	setlocale(LC_ALL, "Russian");
	
	sql::Driver* driver;
	sql::Connection* conn = nullptr;
	sql::Statement* stmt;
	sql::PreparedStatement* ptmt;

	try {
		driver = get_driver_instance();
		conn = driver->connect(SERVER, USER, PASSWORD);
	}
	catch (sql::SQLException& ex) {
		if (conn != nullptr && !conn->isClosed())
			conn->close();
		cout << "Error connection. " << ex.what();
		system("pause");
		exit(1);
	}

	conn->setSchema("itproger");

	string title, text, date, avtor;
	cout << "Enter title: ";
	std::getline(std::cin, title);

	cout << "Enter text: ";
	std::getline(std::cin, text);

	cout << "Enter date: ";
	std::getline(std::cin, date);

	cout << "Enter avtor: ";
	std::getline(std::cin, avtor);

	ptmt = conn->prepareStatement("INSERT INTO articles(title, text, date, avtor) VALUES(?, ?, ?, ?)");

	ptmt->setString(1, title);
	ptmt->setString(2, text);
	ptmt->setString(3, date);
	ptmt->setString(4, avtor);

	ptmt->execute();
	delete ptmt;

	cout << "All is okay";

	conn->close();
	delete conn;

	return 0;
}