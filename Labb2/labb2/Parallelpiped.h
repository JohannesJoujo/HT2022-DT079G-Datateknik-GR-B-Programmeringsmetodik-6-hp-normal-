//
// Created by Johannes Joujo on 2022-12-03.
//

#ifndef LABB2_PARALLELPIPED_H
#define LABB2_PARALLELPIPED_H


#include "Rektangel.h"
class Parallelpiped: public Rektangel
{
private:
    double length;
public:
    Parallelpiped(std::string colour, double bred, double height, double length);
    double GenerateArea() override;
};


#endif //LABB2_PARALLELPIPED_H
