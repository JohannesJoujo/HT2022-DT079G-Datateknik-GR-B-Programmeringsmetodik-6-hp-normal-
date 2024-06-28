//
// Created by Johannes Joujo on 2022-12-03.
//

#ifndef LABB2_CIRKEL_H
#define LABB2_CIRKEL_H

#include "Shape.h"
#include <cmath>
class Cirkel :public Shape
{
private:
    double radius;
    //double area;
public:
    Cirkel(std::string colour, double radius);
    double GenerateArea() override;
    double GetRadius();
    //double GetArea();
};


#endif //LABB2_CIRKEL_H
