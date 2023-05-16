//
//  RightTrapezoid.h
//  Esercitazione
//
//  Created by Riccardo Villa M. on 16/05/23.
//

#ifndef RightTrapezoid_h
#define RightTrapezoid_h

#include<iostream>

/// @Class Right Trapezoid
/// @Brief Specific class that permits the implementation of a Right Trapezoid geometric figure.
class RightTrapezoid
{
private:
    float topSide; ///top side of Right Trapezoid
    float bottomSide; ///Bottom Side of Right Trapezoid
    float height; ///Hight of Right Trapezoid
    
    
public:
    ///@name  Constructors and Destructor
    ///@{
    RightTrapezoid ();
    RightTrapezoid (float topSide, float bottomSide, float height);
    RightTrapezoid (const RightTrapezoid &r);
    ~RightTrapezoid ();
    float Side (float topSide, float bottomSide, float height); ///Function that permit to obtain the oblique side of the figure
    void Draw(); ///Function  that permit to draw the figure
    float topSide ///top side of Right Trapezoid
    float bottomSide ///Bottom Side of Right Trapezoid
    float height ///Hight of Right Trapezoid
    /// @}
    
    /// @name Operators
    /// @{
    RightTrapezoid& operator=(const RightTrapezoid &r);
    bool operator==(const RightTrapezoid  &r);
    /// @}
    
    /// @name Basic Handlings
    /// @{
    void Init();
    void Init(const RightTrapezoid  &r);
    void Reset();
    /// @}
    
    
    /// @name Getters and getter
    /// @{
    void  setSide (float topSide, float bottomSide, float height);
    float  getSide();
    float  getArea (float topSide, float bottomSide, float height);
    float  getPerimeter(float topSide, float bottomSide, float height, float ObliqueSide );
    
    /// @}
    
    /// @name DEBUG and SERIALIZATION
    /// @{
    void ErrorMessage(const char *string);
    void WarningMessage(const char *string);
    void Dump();
    /// @}
        
};
    
}

#endif /* RightTrapezoid_h */
