#include "Triangle.h"
#include <cmath>
#include <iostream>

using namespace std;

// Default constructor
Triangle::Triangle() {}

// Parameterized constructor
Triangle::Triangle(const Point& v1, const Point& v2, const Point& v3)
    : vertex1(v1), vertex2(v2), vertex3(v3) {}

// Perimeter calculation method
double Triangle::perimeter() const {
    double side1 = distance(vertex1, vertex2);
    double side2 = distance(vertex2, vertex3);
    double side3 = distance(vertex3, vertex1);

    return side1 + side2 + side3;
}

// Area calculation method using Heron's formula
double Triangle::area() const {
    double side1 = distance(vertex1, vertex2);
    double side2 = distance(vertex2, vertex3);
    double side3 = distance(vertex3, vertex1);

    double s = (side1 + side2 + side3) / 2.0;  // semi-perimeter
    return sqrt(s * (s - side1) * (s - side2) * (s - side3));
}

// Helper method to calculate distance between two points
double Triangle::distance(const Point& p1, const Point& p2) const {
    double dx = p1.getX() - p2.getX();
    double dy = p1.getY() - p2.getY();
    return sqrt(dx * dx + dy * dy);
}

// Input method for triangle vertices
void Triangle::inputTriangle() {
    cout << "Ingresa los vertices para el triangulo:\n";
    cout << "Vertice 1:\n";
    vertex1.inputPoint();
    cout << "Vertice 2:\n";
    vertex2.inputPoint();
    cout << "Vertice 3:\n";
    vertex3.inputPoint();
}
