// Copyright (c) 2020 Jonathan Pasco-Arnone all rights reserved
//
// Created by Jonathan Pasco-Arnone
// Created on January 2021
// This program calculates the area of a cylinder

#include <iostream>
#include <cmath>


double area_calculation(double radius, double height) {
    // This function calculates the area of a cylinder

    double volume;

    volume = M_PI * pow(radius, 2.0) * height;

    return volume;
}

int main() {
    // This function takes inputs and gives them to the calculation function

    std::string radiusString, heightString;
    int radiusInt, heightInt;
    double volume;

    std::cout << "" << std::endl;
    std::cout << "This program calculates the volume of a cylinder."
          " Please enter the radius and height" << std::endl;
    std::cout << "" << std::endl;
    std::cout << "Radius: ";
    std::cin >> radiusString;
    std::cout << "" << std::endl;
    std::cout << "Height: ";
    std::cin >> heightString;
    std::cout << "" << std::endl;

    try {
        radiusInt = std::stoi(radiusString);
        heightInt = std::stoi(heightString);

        if (radiusInt >= 0 && heightInt >= 0) {
            volume = area_calculation(radiusInt, heightInt);
            std::cout << "The volume is " << volume << "m3" << std::endl;
        } else {
            std::cout << "Please have 2 positive integers" << std::endl;
        }
    } catch (std::invalid_argument) {
        std::cout << "Please enter valid integers" << std::endl;
    }
}
