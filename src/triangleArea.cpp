#include <cmath>
#include <iostream>
#include "include/Triangle.h"

using namespace std;

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

    Triangle t(10,10,10);

    cout << "Area is: " << t.getArea() << endl;
    
    cout << "Area is: " << Triangle(10, 20, 30).getArea() << endl;
    cout << "Area is: " << Triangle(40,30,30).getArea() << endl;

    cout << "Angle 1 is: " << 180 * (Triangle(5,4,3).getAngle1() / M_PI) << endl;

    Triangle t2(10,10,10);
    cout << "Perimeter is: " << t2.side1 + t2.side2 + t2.side3 << endl;

    cout << "Stripped string is: " << removeNonAlpha("B_i-e0n7v?en^$ido") << endl;

    return 0;
}
