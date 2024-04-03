#include <iostream>
using namespace std;

#define MAX_COORD 100
#define UN_DEFIND -12345

class Point {
private:
	int x, y;
	  
public:
	void setCoordination(int x, int y) {
		if (x >= -MAX_COORD && x <= MAX_COORD) this->x = x;
		if (y >= -MAX_COORD && y <= MAX_COORD) this->y = y;
	}
	int getX() { return (x >= -MAX_COORD && x <= MAX_COORD) ? x : UN_DEFIND; }
	int getY() { return (y >= -MAX_COORD && y <= MAX_COORD) ? y : UN_DEFIND; }

};

int main() {
	setlocale(LC_ALL, "ukr");

	Point pt;
	pt.setCoordination(200, 3);

	cout << pt.getX() << " " << pt.getY() << endl;
}