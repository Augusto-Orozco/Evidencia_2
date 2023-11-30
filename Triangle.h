#ifndef TRIANGLE_H
#define TRIANGLE_H
#include "Point.h"

class Triangle {
private:
    Point vertex1;
    Point vertex2;
    Point vertex3;

    // Helper method to calculate distance between two points
    double distance(const Point& p1, const Point& p2) const;

public:
    // Default constructor
    Triangle();

    // Parameterized constructor
    Triangle(const Point& v1, const Point& v2, const Point& v3);

    // Perimeter calculation method
    double perimeter() const;

    // Area calculation method using Heron's formula
    double area() const;

    // Input method for triangle vertices
    void inputTriangle();
};

#endif // TRIANGLE_H
