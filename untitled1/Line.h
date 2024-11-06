#ifndef LINE_H
#define LINE_H

#include "Point.h"

using namespace std;

class Line {
private:
    Point start, end;

public:
    Line(const Point& start, const Point& end);
    Line(int x1, int y1, int x2, int y2);

    string toString() const;

    void setStart(const Point& newStart);
    void setEnd(const Point& newEnd);

    int length() const;

    Point getStart() const;
    Point getEnd() const;
};

#endif //LINE_H
