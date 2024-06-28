/*
 johannes joujo labb 2
 */
#include <iostream>
#include "Shape.h"
#include "Cirkel.h"
#include "Cylinder.h"
#include "Rektangel.h"
#include "Parallelpiped.h"
#include "RoundedRektangel.h"
#include <vector>

using shape_ptr=std::unique_ptr<Shape>;
void GetData(std::vector<shape_ptr>& Shapes);
int main() {
    /*
    Shape* shape[2];
    shape[0] = new Cirkel("red", 2);

    shape[1] = new Cylinder("green", 2, 3);
    for (size_t i = 0; i < 2; i++)
    {
        std::cout << shape[i]->GenerateArea() << "color:" << shape[i]->GetColour() << std::endl;
    }
    */
    /*
    Cirkel hej("red", 3);
    Cylinder hej2("gray", 3, 2);
    std::cout << "area: " << hej.GenerateArea() << " colour: " << hej.GetColour() << std::endl;
    std::cout << "area: " << hej2.GenerateArea() << " colour: " << hej2.GetColour() << std::endl;

    Rektangel hej3("purple", 3, 3);
    std::cout << "area: " << hej3.GenerateArea() << " colour: " << hej3.GetColour() << std::endl;

    Parallelpiped hej4("Grey", 2, 2, 2);
    std::cout << "area: " << hej4.GenerateArea() << " colour: " << hej4.GetColour() << std::endl;

    RoundedRektangel hej5("green", 5, 2, 3);
    std::cout << "area: " << hej5.GenerateArea() << " colour: " << hej5.GetColour() << std::endl;
    */


    std::vector <std::unique_ptr<Shape>> Shapes;
    Shapes.push_back(std::make_unique<Cirkel>("blue", 5));
    Shapes.push_back(std::make_unique<Cylinder>("orange", 3,3));
    Shapes.push_back(std::make_unique<Rektangel>("purpul", 2, 2));
    Shapes.push_back(std::make_unique<Parallelpiped>("Grey", 5, 2, 3));
    Shapes.push_back(std::make_unique<RoundedRektangel>("Green", 5, 2, 3));

    GetData(Shapes);
}

void GetData(std::vector<shape_ptr>& Shapes){
    double TotalArea = 0;
    for (const auto& Shape : Shapes) {
        std::cout << "Colour: " << Shape->GetColour() << " Area: " << Shape->GenerateArea() << std::endl;
        TotalArea += Shape->GenerateArea();
    }
    std::cout << "\nTotal area is: " << TotalArea << std::endl;
}
