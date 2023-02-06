#include <cmath>
#include <iostream>
using namespace std;



double getArea(double s1, double s2, double s3) {

    double s = (s1 + s2 + s3) / 2.0;
    double area = sqrt(s * (s - s1) * (s - s2) * (s - s3));
    return area;

}

bool largerThan(double t1s1, double t1s2, double t1s3,
                double t2s1, double t2s2, double t2s3) {

    return (getArea(t1s1,t1s2,t1s3) > getArea(t2s1,t2s2,t2s3));
}


double sumAreas(double s1[], double s2[], double s3[], int size) {
    double areaTotal = 0;
    for (int i=0; i<size; i++) {
        areaTotal += getArea(s1[i],s2[i],s3[i]);
    }
    return areaTotal;
}

double *getLargest(double s1[], double s2[], double s3[], int size) {

    if (size <= 0) return nullptr;
    double largestArea = getArea(s1[0],s2[0],s3[0]);
    int largestPos = 0;
    for (int i = 1; i<size; i++) {
        double nextArea = getArea(s1[i],s2[i],s3[i]);
        if (nextArea > largestArea) {
            largestArea = nextArea;
            largestPos = i;
        }
    }

    double *largestTriangle = new double[3] { s1[largestPos], s2[largestPos], s3[largestPos] };
    return largestTriangle;
}



double getAngle1(double s1, double s2, double s3) {

    double cosine = (s1*s1 - s2*s2 - s3*s3) / (-2 * s2 * s3);
    double angle = acos(cosine);
    return angle;

}

string removeNonAlpha(string s) {

    string result = "";
    for(int i=0; i<s.size(); i++) {
        if (isalpha(s[i])) {
            result = result + s[i];
        }
    }
    return result;

}

int main() {

    cout << "Area is: " << getArea(10.0, 10.0, 10.0) << endl;
    cout << "Area is: " << getArea(10, 20, 30) << endl;
    cout << "Area is: " << getArea(40,30,30) << endl;

    cout << "Angle 1 is: " << 180 * (getAngle1(5,4,3) / M_PI) << endl;

    cout << "Stripped string is: " << removeNonAlpha("B_i-e0n7v?en^$ido") << endl;

    return 0;
}
