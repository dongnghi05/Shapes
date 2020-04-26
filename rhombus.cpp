//
// Created by Nghi Vo on 4/24/20.
//

#include "rhombus.h"

#include <string>
#include <sstream>
#include <cmath>
#include <algorithm>
#include <cassert>

using std::string;
using std::stringstream;
using std::max;

//Rhombus with one side and 2 diagonals p and q
Rhombus::Rhombus(double p, double q) : _p(p), _q(q){
    assert(p > 0 & q > 0);
}
//ToString function
string Rhombus::ToString() const {
    stringstream retVal;
    retVal << "{Rhombus " << Shape::ToString()
           << " first diagonal = " << _p
           << " second diagonal = " << _q
           << "}";
    return retVal.str();
}
//Area of Rhombus
double Rhombus::Area() const {
    return (_p * _q)/2;
}
// Perimeter of Rhombus
double Rhombus::Perimeter() const {
    return (sqrt(pow(_p,2) + pow(_q,2)) * 2);
}