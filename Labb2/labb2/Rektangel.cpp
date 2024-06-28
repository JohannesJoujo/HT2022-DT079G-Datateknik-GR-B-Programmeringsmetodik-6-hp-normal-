//
// Created by Johannes Joujo on 2022-12-03.
//

#include "Rektangel.h"

#include <utility>
Rektangel::Rektangel(std::string colour, double bred, double height):Shape(std::move(colour)),bred(bred), height(height)
{
}

double Rektangel::GenerateArea()
{
    return bred * height;
}

double Rektangel::GetHeight() const
{
    return height;
}

double Rektangel::GetBred() const
{
    return bred;
}