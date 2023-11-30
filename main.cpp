#include <iostream>
#include "Triangle.h"

int main() {
    // Create a Triangle object using the default constructor
    Triangle myTriangle;

    // Input vertices for the triangle
    myTriangle.inputTriangle();

    // Display the perimeter and area of the triangle
    std::cout << "Perimeter: " << myTriangle.perimeter() << std::endl;
    std::cout << "Area: " << myTriangle.area() << std::endl;

    return 0;
}
