//
//  Right Trapezoid.cpp
//  Trapezio Rettangolo
//
//  Created by Riccardo Villa M. on 19/05/23.
//
///\file RightTrapezoid.cpp
///\brief Class Right Trapezoid: implementation of the functions
///
///Details.
#include <iostream>
#include "Right Trapezoid.h"
///Default parameter
#define def 1
///@brief default constructor
RightTrapezoid::RightTrapezoid(){
    Init();
    setDim(def, def, def);
}
/// @brief constructor
/// @param t Top Side
/// @param b Bottom Side
/// @param h height
RightTrapezoid::RightTrapezoid ( float t, float b, float h) {
    
    Init();
    
    if (t<=0.)
        std::cout << "Error: negative side (Top Side)!"<<std::endl;
    else
        topSide=t;
    if (b<=0.)
        std::cout <<"Error: negative side (Bottom Side)!"<<std::endl;
    else
        bottomSide=b;
    if (h<=0.)
        std::cout <<"Error: negative side (Height)!"<<std::endl;
    else
        height=h;
    }
///@Brief Destructor
RightTrapezoid::~RightTrapezoid(){
    std::cout << "Destruction complete"<<std::endl;
    Reset();
    }
///@Brief copy constructor
///@Param x refence to the object that should be copied
RightTrapezoid:: RightTrapezoid(RightTrapezoid &x){
Init(x);
}
/// @brief overload of operator =
/// @param x reference to the object on the right side of the operator
/// @return reference to the object on the left side of the operator
RightTrapezoid& RightTrapezoid::operator=(const RightTrapezoid &x) {

    Init(x);
    
    return *this;
    
}



/// @brief default initialization of the object
void RightTrapezoid::Init() {
    Reset();
    topSide = 0.;
    bottomSide = 0.;
    height = 0.; 
}


/// @brief initialization of the object as a copy of an object
/// @param x reference to the object that should be copied
void RightTrapezoid::Init(const RightTrapezoid &x) {
    Reset();
    topSide = x.topSide;
    height = x.height;
    bottomSide =x.height;
}

/// @brief total reset of the object
void RightTrapezoid::Reset() {
    topSide= 0.;
    height = 0.;
    bottomSide=0;
}


/// @brief set top Side of the object
/// @param  t Top side
void RightTrapezoid::setTopSide(float t) {

    if (t < 0.) {
        std::cout << "Error! Negative value!"<< std::endl;
        return;
    }

    topSide = t;

}

/// @brief set bottom side  of the object
/// @param b  BottomSide
void RightTrapezoid::setBottomSide(float b){

    if (b < 0.) {
        std::cout << "Error! Negative Value" << std::endl;
        return;
    }

    bottomSide = b;
}
/// @brief set height   of the object
/// @param h  height
void RightTrapezoid::setHeight(float h){

    if (h < 0.) {
        std::cout << "Error negative Value " << std::endl;
        return;
    }

    height  = h;
}


/// @brief set Top side, bottom side and height of the Right trapezoid
/// @param t top side
/// @param b bottom side
/// @Param h height
void RightTrapezoid:: setDim (float t, float b, float h) {
    setTopSide(t);
    setBottomSide(b);
    setHeight(h);
  }


/// @brief get oblique side  of the object
/// @Param os : oblique side
/// @return  Oblique side
float RightTrapezoid::GetSide(float t, float b, float h) {
    float os = sqrt((h*h)+(b-h));
    return os ;

}



/// @brief get the area of the object
/// @return area of the Right Trapezoid
float RightTrapezoid::Area() {

    return ((bottomSide+topSide)*height)/2 ;

}

/// @brief get the perimeter of the object
/// @return perimeter of the Right Trapezoid
float RightTrapezoid::Perimeter() {

    return (bottomSide+height+topSide+GetSide(topSide, bottomSide, height));

}




/// @brief for debugging: all about the object
void RightTrapezoid::Dump() {
    std::cout << std::endl;
    std::cout << "---Rectangle---" << std::endl;
    std::cout << std::endl;
 
    std::cout << "Perimeter = " << Perimeter() << std::endl;
    std::cout << "Area = " << Area() << std::endl;
    std::cout << std::endl;

}


