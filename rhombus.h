//
// Created by Nghi Vo on 4/24/20.
//

#ifndef SHAPES_EXAMPLE_1_RHOMBUS_H
#define SHAPES_EXAMPLE_1_RHOMBUS_H


#include "shape.h"

#include <string>
using std::string;

class Rhombus : public Shape{
    //Rhombus has 2 diagonals p and q
    double _q, _p;
public:
    Rhombus(double p, double q);
    virtual string ToString()const;
    virtual double Area()const;
    virtual double Perimeter()const;
};

#endif //SHAPES_EXAMPLE_1_RHOMBUS_H
