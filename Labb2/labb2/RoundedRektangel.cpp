//
// Created by Johannes Joujo on 2022-12-03.
//

#include "RoundedRektangel.h"

RoundedRektangel::RoundedRektangel(std::string colour, double height, double bred, double radian):
Rektangel(std::move(colour), bred, height), radian(radian)
{
}

double RoundedRektangel::GenerateArea()
{
    return Rektangel::GenerateArea() - (radian* radian) * (4- M_PI);
}
