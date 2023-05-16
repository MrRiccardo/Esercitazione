//
//  RightTrapezoid.cpp
//  Esercitazione
//
//  Created by Riccardo Villa M. on 16/05/23.
//


/// \file RightTrapezpoid.cpp
/// \brief Class RightTrapezoid : implementation of functions
/// Details:
#include "RightTrapezoid.h"
#include "polygon.h"
#include <iostream>


///@Brief Default Constructors
RightTrapezoid::RightTrapezoid()
{
     Init();
}
/// @brief destructor: Set the sides of Right Trapezoid null
RightTrapezoid::~RightTrapezoid() {

    Reset();

}
/// @brief copy constructor : this functions copies the height of the Right Trapezoid
/// @param r reference to the object that should be copied
RightTrapezoid::RightTrapezoid(const RightTrapezoid &r) {

   Init(r);
    
}
/// @brief constructor
/// @param t top side
/// @param h height
/// @param b bottom side
RightTrapezoid::RightTrapezoid(float  t, float b, float h) {

    setSide(t, b, h);

    if (t <= 0.)
        cout << "WARNING:  - constructor: width should be > 0" << endl;
    else
       topSide  = t;

    if ( b<= 0.)
        cout << "WARNING:  - constructor: length should be > 0" << endl;
    else
        bottomSide = b;
    if (h<=0.)
        cout << "WARNING:  - constructor: length should be > 0" << endl;
    else
        height= h;
}
/// @brief default initialization of the Right Trapezoid
void RightTrapezoid::Init() {
    Reset();
    topSide = 0.;
    height = 0.;
    bottomSide=0.;
}
/// @brief total reset of the object
void RightTrapezoid::Reset() {
    topSide= 0.;
    height= 0.;
    bottomSide=0.;
    
}
///@Brief Function that allows to calculate the oblique side of the Right Trapezoid
///@Param s is the value of the oblique side
float side (float t, float b, float h)
{
    float  s = sqrtf((h*h)+(b-h));
    return s;
}
///@Brief Function that allows to draw the figure
    void Draw()
{
        cout << "This is the draw of a Right Trapezoid" << endl;
    }
///@Brief Function that allow to calculate the area
///@param A is the value of the area
float   getArea (float t, float b, float h)
{
    float A = ((b+t)*h)/2;
}
///@Brief Functions that allow to calculate the perimeter
///@Param P is the perimeter
float  getPerimeter(float t, float b, float h, float s)
{
     float P = t + b + h + s;
    return P;
}
