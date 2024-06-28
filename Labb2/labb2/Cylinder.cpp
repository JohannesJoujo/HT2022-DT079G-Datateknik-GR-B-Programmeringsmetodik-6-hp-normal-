//
// Created by Johannes Joujo on 2022-12-03.
//

#include "Cylinder.h"

#include <utility>
Cylinder::Cylinder(std::string colour, double radius, double height) :
Cirkel(std::move(colour), radius), height(height)
{
}

double Cylinder::GenerateArea()
{
    return Cirkel::GenerateArea() * 2 + height * GetRadius() * 2 * M_PI;
}
