#include <iostream>
#include "FilesWork.h"

FilesWork::FilesWork(const std::string& filename) : filename(filename) {}

void FilesWork::write_file(const std::string& data) {
    std::ofstream file(filename);
    if (file.is_open()) {
        file << data;
        file.close();
    }
}

void FilesWork::read_file() {
    std::ifstream file(filename);
    if (file.is_open()) {
        std::string line;
        while (getline(file, line)) {
            std::cout << line << std::endl;
        }
        file.close();
    }
}

FilesWork& FilesWork::operator+=(const std::string& data) {
    std::ofstream file(filename, std::ios_base::app);
    if (file.is_open()) {
        file << data;
        file.close();
    }
    return *this;
}
