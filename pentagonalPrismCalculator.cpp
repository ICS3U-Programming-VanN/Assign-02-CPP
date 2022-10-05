// Copyright (c) 2022 Van Nguyen All rights reserved.
//
// Created by: Van Nguyen
// Date: September 30th, 2022
// This program calculates and outputs the volume and surface area
// of a pentagonal prism based off the height, base edge
// and unit of measurement given by the user

#include <cmath>
#include <iomanip>
#include <iostream>


int main() {
    // Initialize Variables
    std::string unitOfMeasurement;
    float baseEdge, height, volume, surfaceArea;

    // Asks user for unit of measurement
    std::cout << "Enter the Metric Unit of Measurement (ex. mm, cm, m, km): ";
    std::cin >> unitOfMeasurement;

    // Asks user measurement of base edge
    std::cout << "Enter the measurement of a Base Edge: ";
    std::cin >> baseEdge;

    // Asks user measurement of height
    std::cout << "Enter the Height: ";
    std::cin >> height;

    // Calculates Volume and Surface Area of Pentagonal Prism
    volume = ((static_cast<float>(1) / static_cast<float>(4))
    * (sqrt(5 * (5 + 2 * (sqrt(5))))) * pow(baseEdge, 2) * height);
    surfaceArea = (5 * baseEdge * height +
    (static_cast<float>(1) / static_cast<float>(2))
    * (sqrt(5 * (5 + 2 * (sqrt(5))))) * pow(baseEdge, 2));

    // Displays the Volume and Surface Area to user
    std::cout << "The Volume of the Pentagonal Prism: " << std::fixed
    << std::setprecision(2) << volume
    << unitOfMeasurement << "^3" << std::endl;
    std::cout << "The Surface Area of the Pentagonal Prism: " << std::fixed
    << std::setprecision(2) << surfaceArea
    << unitOfMeasurement << "^2" << std::endl;
}
