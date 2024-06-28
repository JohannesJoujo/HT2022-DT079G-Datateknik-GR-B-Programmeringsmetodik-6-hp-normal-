//
// Created by Johannes Joujo on 2022-12-03.
//

#include "Shape.h"

#include <utility>
Shape::Shape(std::string colour) : colour(std::move(colour))
{
}

std::string Shape::GetColour() {
    return colour;
}
