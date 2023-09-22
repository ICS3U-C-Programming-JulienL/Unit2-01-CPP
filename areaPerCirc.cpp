// Copyright (c) 2023 Julien Lamoureux All rights reserved.
// .
// Created by: Julien Lamoureux
// Date: September 22, 2023
// This program calculates the area and circumference of a circle

#include <cmath>
#include <iostream>

int main() {
    float radius = 3;
    float circumference = 2 * M_PI * radius;
    float areaOfCircle = M_PI * pow(radius, 2);
    std ::cout << "A circle that has a radius of :" << std:: endl;
    std ::cout << "3 cm" << std::endl;
    std ::cout << "" << std::endl;
    std ::cout << "The Area = " << areaOfCircle << " cm^2" << std::endl;
    std ::cout << "The Circumference = " << circumference << " cm" << std::endl;
}
