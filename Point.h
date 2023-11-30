#ifndef POINT_H
#define POINT_H

class Point {
private:
    double x;
    double y;

public:
    // Default constructor
    Point();

    // Parameterized constructor
    Point(double x, double y);

    // Getter methods
    double getX() const;
    double getY() const;

    // Input method
    void inputPoint();
};

#endif // POINT_H

