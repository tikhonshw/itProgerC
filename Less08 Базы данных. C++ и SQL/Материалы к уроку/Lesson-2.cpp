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

	stmt = conn->createStatement();
	//stmt->execute("DROP DATABASE some");
	// DROP TABLE users
	stmt->execute("CREATE TABLE IF NOT EXISTS `users` (id INT(10) AUTO_INCREMENT PRIMARY KEY, login VARCHAR(50), password VARCHAR(50)) ENGINE=MYISAM");
	delete stmt;

	cout << "All is okay";

	conn->close();
	delete conn;

	return 0;
}