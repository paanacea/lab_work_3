
#include "Point.h"

using namespace std;

Point::Point(int x, int y) {}

string Point::toString() const {
    return "{" + to_string(x) + ";" + to_string(y) + "}";
}

int Point::getX() const { return x;}
int Point::getY() const { return y;}

void Point::setX(int newX) { x = newX;}
void Point::setY(int newY) { y = newY;}


