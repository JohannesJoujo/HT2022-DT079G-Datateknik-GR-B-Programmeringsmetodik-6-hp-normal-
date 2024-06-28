//
// Created by Johannes Joujo on 2022-12-03.
//

#ifndef LABB2_ROUNDEDREKTANGEL_H
#define LABB2_ROUNDEDREKTANGEL_H

#include "Rektangel.h"
#include "Cirkel.h"
class RoundedRektangel: public Rektangel
{
private:
    double radian;

public:
    RoundedRektangel(std::string colour, double height, double bred, double radian);
    double GenerateArea() override;
};


#endif //LABB2_ROUNDEDREKTANGEL_H
