#include <iostream>
#include <clocale> 
#include <cstring>
#include <fstream>


// Определение пространства имен
namespace Action {
    void functionSaveToFile (std::string userNameFile, std::string userText) {
        std::ofstream file( userNameFile, std::ofstream::app);  
        file << userText << "\n"  << std::endl;
        file.close();
    }
    void functionPrinToScreen (std::string userNameFile, std::string userText) {
        std::cout << userNameFile << "\t"  << userText  << std::endl; 
    }
}
namespace MySpace {
    // функция в  пространства имен 
    void functionSaveInfo(std::string* file, std::string* text, int lenArr) { 
        for (int i = 0; i < lenArr; i++) {
            std::string userNameFile = *(file + i);
            std::string userText = *(text + i);

            // std::cout << *(file + i) << "\t"  << *(text + i)  << std::endl; 
            // std::ofstream file( userNameFile, std::ofstream::app);  
            // file << userText << "\n"  << std::endl;
            // file.close();
            Action::functionSaveToFile(userNameFile, userText);
            Action::functionPrinToScreen(userNameFile, userText);
        }
    }
    
} 

int main() {
    setlocale(LC_ALL, "rus"); 

 

    /*
        Создайте цикл, что сработает 3 раза. 
        Внутри цикла получайте от пользователя информацию. 
        Вам нужно получать от пользователя каждый раз по две строки: 
        первая будет хранить название файла, 
        вторая будет хранить текст для файла 
        (эти данные также сохраните в массив).
    */
    const int numFiles = 3;
    std::string userNameFile[numFiles];
    std::string userText[numFiles]; 

    for (int i = 0; i < numFiles; i++) {
        std::cout << "Введите имя файла: "; 
        std::cin >> userNameFile[i];

        std::cout << "Введите текст: "; 
        std::cin >> userText[i]; 
    }

    /*Создайте функцию и передайте в неё массив со всеми названиями файлов*/
    // std::cout << "Размер отправляего массива: " << sizeof(userNameFile)/sizeof(userNameFile[0]) << std::endl << std::endl; 
    
    MySpace::functionSaveInfo(userNameFile, userText, sizeof(userNameFile)/sizeof(userNameFile[0])); 

    return 0;
} 


