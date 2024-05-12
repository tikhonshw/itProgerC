#include <iostream>
#include <clocale>
#include <map>

using std::cout;
using std::endl;

int main() {
	setlocale(LC_ALL, "Russian");
	
	std::map<std::string, bool> apps;
	apps.insert(std::make_pair("finder", true));
	apps.insert(std::pair<std::string, bool>("photoshop", false));
	apps.emplace("vs code", true);

	auto find_item = apps.find("photoshop");

	cout << apps["finder"] << endl;
	cout << find_item->second;

	apps.erase("finder");
	//if(apps.contains("finder"))

	for (auto el : apps) {
		cout << el.first << endl;
		cout << el.second << endl;
	}

	std::multimap<std::string, bool> apps1;
	apps1.emplace("vs code", true);
	apps1.emplace("vs code", true);

	return 0;
}