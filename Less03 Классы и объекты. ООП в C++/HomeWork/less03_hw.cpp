#include <iostream>
#include <clocale>
#include <string>
#include <ctime>

using std::cout;
using std::endl;
using std::string;

 
class Player {
    private:
        string name;
        string choice;
    public:
        Player() {
            name = "Bot";
            choice = "Rock";
        }
        Player(string name, string choise) {
            this->name = name;
            this->choice = choise;
        }
        void getInfo() {
            cout << name << "\t" << choice << endl; 
        }
        string whoWins(Player opponent) {
            // cout << name << "\t" << choise  << "\t" << oponents.name << "\t" << oponents.choise << endl;
            if (choice == opponent.choice) {
                return "Ничья";
            } else if ((choice == "Rock" && opponent.choice == "Scissors") ||
                    (choice == "Scissors" && opponent.choice == "Paper") ||
                    (choice == "Paper" && opponent.choice == "Rock")) {
                return name + " побеждает!";
            } else {
                return opponent.name + " побеждает!";
            }
        }
};
 

int main() {
	setlocale(LC_ALL, "rus");
    // srand(time_t(NULL));
    srand(time(NULL));
 
    Player bot;
    Player alex("Alex", "Paper");
    bot.getInfo();
    alex.getInfo();

    cout << bot.whoWins(alex) << endl; 
     
	return 0;
}
