#include <iostream>
#include <clocale> 
#include <cstring>

int main() {
    setlocale(LC_ALL, "rus");

    std::string word = "hello", word2 = "World", word3;

    word[0] = 't';

    char words[255] = "hello World", words2[4] = "!!!";

    word3 = word + word2;
    strcat(words, words2);

    std::cout << size(word) << std::endl;
    std::cout << strlen(words) << std::endl;

    if (!word.empty()) {
        std::cout << size(word) << std::endl << std::endl;
    }


    //ASCII
    char sym = 103;
    int code = 'g';

    for (int i = 0; i < 255; i++) {
        std::cout << i << "\t" << (char)i << std::endl;
    }

    return 0;
}



