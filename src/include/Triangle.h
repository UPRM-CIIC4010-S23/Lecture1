 class Triangle {

    private:
    double sides[3];
    int color;
    // double side1;
    // double side2;
    // double side3;

    public:
    Triangle(double s1, double s2, double s3) {
        sides[0] = s1;
        sides[1] = s2;
        sides[2] = s3;
    }

    //Getters
    double getSide1() { return sides[0]; }
    double getSide2() { return sides[1]; }
    double getSide3() { return sides[2]; }

    //Setters
    void setSides(double s1, double s2, double s3) { 
        sides[0] = s1; 
        sides[1] = s2;
        sides[2] = s3; 
    }

    // Instance methods
    double getArea();
    bool largerThan(Triangle t2);
    double getAngle1();
    
    // Static methods
    static double sumAreas(Triangle triangles[], int size);
    static Triangle getLargest(Triangle triangles[], int size);

 };