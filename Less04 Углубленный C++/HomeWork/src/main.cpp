#include <iostream>
#include "FilesWork.h"

int main() {

	// Создание объекта
	FilesWork file("some.txt");
	// Запись данных в файл
	file.write_file("new text");
	// Считывание данных из файла
	file.read_file();

	// Добавление дополнительной информации в файл
	file += "!!!";
	// Заново считываем данные
	file.read_file();

	return 0;

	return 0;
}
