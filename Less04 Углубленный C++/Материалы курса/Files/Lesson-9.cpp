#include <iostream>
#include <clocale>
#include <string>

using std::string;
using std::cout;
using std::endl;

class Point {
private:
	int x, y;
public:
	Point(int x, int y) {
		this->x = x;
		this->y = y;
	}

	Point operator + (Point& p2) {
		return Point( (x + p2.x), (y + p2.y) );
	}

	Point operator * (Point& p2) {
		return Point((x * p2.x), (y * p2.y));
	}

	Point operator - (int num) {
		return Point((x - num), (y - num));
	}

	void operator += (int num) {
		x += num;
		y += num;
	}

	void operator -- (int num) {
		x--;
		y--;
	}

	bool operator == (Point& p2) {
		return x == p2.x && y == p2.y;
	}

	bool operator <= (Point& p2) {
		return x <= p2.x && y <= p2.y;
	}

	bool operator <= (float num) {
		return x <= num && y <= num;
	}

	void operator () (string word) {
		cout << word << ": " << x << " - " << y << endl;
	}

	void operator () () {
		cout << x << " - " << y << endl;
	}

	void operator [] (int el) {
		cout << (el == 1 ? x : y) << endl;
	}

	operator int() const {
		return x;
	}

	int get_x() {
		return x;
	}

	int get_y() {
		return y;
	}
};

int main() {
	setlocale(LC_ALL, "Russian");

	Point first(6, 7), second(7, 4);
	Point third = first - 5;
	third--;
	//cout << third.get_x() << " - " << third.get_y() << endl;
	bool res = third <= 8.6f;
	//cout << (res ? "true" : "false") << endl;
	//third[1];

	int res1 = third;
	cout << res1;
	
	return 0;
}