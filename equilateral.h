//
// Created by Nghi Vo on 4/24/20.
//

#ifndef SHAPES_EXAMPLE_1_EQUILATERAL_H
#define SHAPES_EXAMPLE_1_EQUILATERAL_H

#include "triangle.h"

class Equilateral : public Triangle {
public:
    Equilateral(double oneside);
    virtual string ToString()const;

};


#endif //SHAPES_EXAMPLE_1_EQUILATERAL_H
