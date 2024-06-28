//
// Created by Johannes Joujo on 2022-12-03.
//


#include "Cirkel.h"

#include <utility>

Cirkel::Cirkel(std::string colour, double radius):
Shape(std::move(colour)),radius(radius) {
}

double Cirkel::GenerateArea() {
    return radius * radius * M_PI;
}

double Cirkel::GetRadius() {
    return radius;
}
