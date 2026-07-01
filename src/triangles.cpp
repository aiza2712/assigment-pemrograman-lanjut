#include <cmath>
#include <algorithm>
#include <iostream>

#include "include/triangle.hpp"

using namespace geometry;

static const float EPSILON = 1e-4f;

Triangle::Triangle()
{
    _t1 = Point2D();
    _t2 = Point2D();
    _t3 = Point2D();
}

Triangle::Triangle(Point2D t1, Point2D t2, Point2D t3)
    : _t1(t1), _t2(t2), _t3(t3)
{
}

void Triangle::SetT1(Point2D t1) { _t1 = t1; }
void Triangle::SetT2(Point2D t2) { _t2 = t2; }
void Triangle::SetT3(Point2D t3) { _t3 = t3; }

void Triangle::TriangleType()
{
    Point2D dA = _t2 - _t3;
    float sideA = sqrt( dA.GetX()*dA.GetX() + dA.GetY()*dA.GetY() + dA.GetZ()*dA.GetZ() );

    Point2D dB = _t1 - _t3;
    float sideB = sqrt( dB.GetX()*dB.GetX() + dB.GetY()*dB.GetY() + dB.GetZ()*dB.GetZ() );

    Point2D dC = _t1 - _t2;
    float sideC = sqrt( dC.GetX()*dC.GetX() + dC.GetY()*dC.GetY() + dC.GetZ()*dC.GetZ() );

    bool sameAB = fabs(sideA - sideB) < EPSILON;
    bool sameBC = fabs(sideB - sideC) < EPSILON;
    bool sameAC = fabs(sideA - sideC) < EPSILON;

    bool isEquilateral = sameAB && sameBC;
    bool isIsosceles = sameAB || sameBC || sameAC;

    float sides[3] = { sideA, sideB, sideC };
    std::sort(sides, sides + 3);
    bool isRightAngled = fabs( (sides[0]*sides[0] + sides[1]*sides[1]) - (sides[2]*sides[2]) ) < 1e-2f;

    if (isEquilateral)
    {
        std::cout << "sama sisi" << std::endl;
    }
    else if (isRightAngled)
    {
        std::cout << "siku-siku" << std::endl;
    }
    else if (isIsosceles)
    {
        std::cout << "sama kaki" << std::endl;
    }
    else
    {
        std::cout << "sembarang" << std::endl;
    }
}