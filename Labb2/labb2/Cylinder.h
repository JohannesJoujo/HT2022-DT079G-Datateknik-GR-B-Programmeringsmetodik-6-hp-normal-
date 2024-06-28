//
// Created by Johannes Joujo on 2022-12-03.
//

#ifndef LABB2_CYLINDER_H
#define LABB2_CYLINDER_H

#include "Cirkel.h"
class Cylinder :public Cirkel
{
private:
    double height;

public:
    Cylinder(std::string colour, double radius, double height);
    double GenerateArea() override;
};


#endif //LABB2_CYLINDER_H
