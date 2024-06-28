//
// Created by Johannes Joujo on 2022-12-03.
//

#ifndef LABB2_REKTANGEL_H
#define LABB2_REKTANGEL_H


#include "Shape.h"
class Rektangel:public Shape
{
private:
    double bred;
    double height;

public:
    Rektangel(std::string colour, double bred, double height);
    double GenerateArea() override;
    double GetHeight() const;
    double GetBred() const;

};


#endif //LABB2_REKTANGEL_H
