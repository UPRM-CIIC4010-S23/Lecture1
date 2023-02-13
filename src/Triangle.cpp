#include <cmath>
#include "include/Triangle.h"

double Triangle::getArea() {

    double s = (this->side1 + this->side2 + this->side3) / 2.0;
    double area = sqrt(s * (s - this->side1) * (s - this->side2) * (s - this->side3));
    return area;

}

bool Triangle::largerThan(Triangle t2) {

    return (this->getArea() > t2.getArea());

}

double Triangle::getAngle1() {

    double cosine = (this->side1 * this->side1 - this->side2 * this->side2 - this->side3 * this->side3) / (-2 * this->side2 * this->side3);
    double angle = acos(cosine);
    return angle;

}

double Triangle::sumAreas(Triangle triangles[], int size) {
    double areaTotal = 0;
    for (int i=0; i<size; i++) {
        areaTotal += triangles[i].getArea();
    }
    return areaTotal;
}

Triangle Triangle::getLargest(Triangle triangles[], int size) {

    Triangle largestTriangle = triangles[0];
    double largestArea = triangles[0].getArea();
    for(int i = 1; i< size; i++) {

        double nextArea = triangles[i].getArea();
        if (nextArea > largestArea) {
            largestArea = nextArea;
            largestTriangle = triangles[i];
        }
    }
    return largestTriangle;

}