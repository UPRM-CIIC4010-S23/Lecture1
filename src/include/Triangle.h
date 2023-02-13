 class Triangle {

    public:
    double side1;
    double side2;
    double side3;

    Triangle(double s1, double s2, double s3) {
        side1 = s1;
        side2 = s2;
        side3 = s3;
    }

    // Instance methods
    double getArea();
    bool largerThan(Triangle t2);
    double getAngle1();
    
    // Static methods
    static double sumAreas(Triangle triangles[], int size);
    static Triangle getLargest(Triangle triangles[], int size);

 };