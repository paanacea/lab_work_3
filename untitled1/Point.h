#ifndef POINT_H
#define POINT_H

#include <string>

using namespace std;

class Point {
private:
    int x{}, y{};

public:
    Point(int x, int y);

    string toString() const;

    int getX() const;
    int getY() const;

    void setX(int newX);
    void setY(int newY);
};

#endif //POINT_H
