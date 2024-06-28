//
// Created by Johannes Joujo on 2022-12-03.
//

#include "Parallelpiped.h"

#include <utility>
Parallelpiped::Parallelpiped(std::string colour, double bred, double height, double length):
Rektangel(std::move(colour),bred,height), length(length)
{
}

double Parallelpiped::GenerateArea()
{
    Rektangel h2(GetColour(), GetBred(), length);
    Rektangel h3(GetColour(), length, GetHeight());
    return 2 * (Rektangel::GenerateArea() + h2.GenerateArea() + h3.GenerateArea());
}