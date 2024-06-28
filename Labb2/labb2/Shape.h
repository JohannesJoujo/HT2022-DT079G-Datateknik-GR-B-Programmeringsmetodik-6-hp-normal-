//
// Created by Johannes Joujo on 2022-12-03.
//

#ifndef LABB2_SHAPE_H
#define LABB2_SHAPE_H

#include <iostream>
class Shape
{
private:
    std::string colour;

public:
    Shape(std::string colour);
    virtual ~Shape() = default;
    virtual double GenerateArea() = 0;
    std::string GetColour();
};



#endif //LABB2_SHAPE_H
