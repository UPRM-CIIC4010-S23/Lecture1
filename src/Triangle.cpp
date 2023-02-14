#include <cmath>
#include "include/Triangle.h"

double Triangle::getArea() {

    double s = (this->getSide1() + this->getSide2() + this->getSide3()) / 2.0;
    double area = sqrt(s * (s - this->getSide1()) * (s - this->getSide2()) * (s - this->getSide3()));
    return area;

}

bool Triangle::largerThan(Triangle t2) {

    return (this->getArea() > t2.getArea());

}

double Triangle::getAngle1() {

    double cosine = (this->getSide1() * this->getSide1() - this->getSide2() * this->getSide2() - this->getSide3() * this->getSide3()) / (-2 * this->getSide2() * this->getSide3());
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