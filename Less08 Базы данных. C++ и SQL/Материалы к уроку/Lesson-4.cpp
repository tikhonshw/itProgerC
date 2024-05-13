#include <iostream>
#include <clocale>

#include "mysql_connection.h"
#include <cppconn/driver.h>
#include <cppconn/exception.h>
#include <cppconn/prepared_statement.h>
#include <cppconn/resultset.h>

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
	sql::ResultSet* res_set;

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

	/*stmt = conn->createStatement();

	res_set = stmt->executeQuery("SELECT * FROM `articles` WHERE title LIKE '%is%' OR id >= 2 ORDER BY `id` DESC LIMIT 1 OFFSET 1");
	while (res_set->next()) {
		cout << "ID: " << res_set->getInt("id") << ". Title: " << res_set->getString("title") << endl;
	}
	delete stmt;
	delete res_set;*/

	int num;
	cout << "Enter id: ";
	std::cin >> num;

	ptmt = conn->prepareStatement("SELECT * FROM `articles` WHERE id >= ?");
	ptmt->setInt(1, num);
	res_set = ptmt->executeQuery();
	while (res_set->next()) {
		cout << "ID: " << res_set->getInt("id") << ". Title: " << res_set->getString("title") << endl;
	}
	delete ptmt;
	delete res_set;

	cout << "All is okay";

	conn->close();
	delete conn;

	return 0;
}