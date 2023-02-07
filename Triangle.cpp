#include <cmath>
#include "Triangle.h"

double Triangle::getArea(Triangle t) {

    double s = (t.side1 + t.side2 + t.side3) / 2.0;
    double area = sqrt(s * (s - t.side1) * (s - t.side2) * (s - t.side3));
    return area;

}