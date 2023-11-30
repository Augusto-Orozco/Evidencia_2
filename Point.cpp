#include "Point.h"
#include <iostream>

// Default constructor
Point::Point() : x(0.0), y(0.0) {}

// Parameterized constructor
Point::Point(double x, double y) : x(x), y(y) {}

// Getter methods
double Point::getX() const {
    return x;
}

double Point::getY() const {
    return y;
}

// Input method
void Point::inputPoint() {
    std::cout << "Ingresa las coordenadas de x (Una a la vez en el orden de los vertices): ";
    std::cin >> x;
    std::cout << "Ingresa las coordenadas de y (Una a la vez en el orden de los vertices): ";
    std::cin >> y;
}
