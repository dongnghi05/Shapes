//
// Created by Nghi Vo on 4/24/20.
//

#include "equilateral.h"
#include "triangle.h"

#include <string>
#include <sstream>
#include <cassert>
using std::string;
using std::stringstream;

Equilateral::Equilateral (double oneside) : Triangle(oneside, oneside, oneside){

}
string Equilateral::ToString() const {
    stringstream retVal;
    retVal << "{Equilateral " << Triangle::ToString() << "}";
    return retVal.str();
}
