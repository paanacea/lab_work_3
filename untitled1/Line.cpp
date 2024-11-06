
#include "Line.h"
#include <cmath>

using namespace std;

Line::Line(const Point &start, const Point &end) : start(start), end(end) {}
Line::Line(int x1, int y1, int x2, int y2) : start(x1,y1), end(x2,y2) {}

string Line::toString() const {
    return "  Линия от " + start.toString() + "до " + end.toString();
}

int Line::length() const {
    return static_cast<int>(sqrt(pow(end.getX() - start.getX(), 2) + pow(end.getY() - start.getY(), 2)));
}

void Line::setStart(const Point& newStart) { start = newStart;}
void Line::setEnd(const Point &newEnd) { end = newEnd; }

Point Line::getStart() const { return start;}
Point Line::getEnd() const { return  end;}