#include <iostream>
#include <clocale>

#include "/home/user/MySoft/itProger/DrvMySQL/mysql/include/jdbc//mysql_connection.h"
#include </home/user/MySoft/itProger/DrvMySQL/mysql/include/jdbc/cppconn/driver.h>
#include </home/user/MySoft/itProger/DrvMySQL/mysql/include/jdbc/cppconn/exception.h>
#include </home/user/MySoft/itProger/DrvMySQL/mysql/include/jdbc/cppconn/prepared_statement.h>

using std::string;
using std::cout;
using std::endl;

const string SERVER = "tcp://10.152.36.73:3306";
const string USER = "root";
const string PASSWORD = "3333";

int main() {
    setlocale(LC_ALL, "Russian");

    sql::Driver* driver;
    sql::Connection* conn = nullptr;
    sql::Statement* stmt;

    try {
        driver = get_driver_instance();
        conn = driver->connect(SERVER, USER, PASSWORD);
    }
    catch(sql::SQLException& ex) {
        if (conn != nullptr && !conn->isClosed())
            conn->close();
        cout << "Error connection. " << ex.what();
        system("pause");
    }
    



    return 0;
}