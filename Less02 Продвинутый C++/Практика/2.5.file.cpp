#include <iostream>
#include <clocale> 
#include <cstring>
#include <fstream>




int main() {
    setlocale(LC_ALL, "rus");

    std::string file_name, user_text;
    
    std::cout << "Введите имя файла: ";
    getline(std::cin, file_name);

    std::cout << "Введите текст: ";
    getline(std::cin, user_text);



    std::ofstream file(file_name, std::ofstream::app); 
    // std::ofstream file("2.5.file.txt", std::ofstream::app); 
    // file.open("2.5.file.txt");

    file << user_text << "\n"  << std::endl;

    file.close();

    std::ifstream iFile("2.5.file.txt");
    std::string file_txt;
    while ( getline(iFile, file_txt) ) {
        std::cout << file_txt << std::endl;

    }

    

    iFile.close();



    return 0;
} 


