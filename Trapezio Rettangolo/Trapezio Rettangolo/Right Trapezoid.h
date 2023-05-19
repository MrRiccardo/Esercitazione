
/*! \file rightTrapezoid.h
    \brief Declaration of the class Right Trapezoid

    Details.
*/
#ifndef Right_Trapezoid_h
#define Right_Trapezoid_h

#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <string.h>


/// @class Right Trapezoid
/// @brief a derivate class to menage Right Trapezoid 

class RightTrapezoid
{
private:
    float topSide;
    float bottomSide;
    float height;
public:
   
    /// @name CONSTRUCTORS/DESTRUCTOR
    /// @{

    /// Default constructor
    RightTrapezoid ();
    /// Copy constructor
    RightTrapezoid(RightTrapezoid &x);
    ///Initialitation constructor
    RightTrapezoid (float t, float b, float h);
    /// Destructor
     ~RightTrapezoid();
    //@}

    /// @name OPERATORS
    /// @{

    /// Assignment overloading
    RightTrapezoid& operator = (const RightTrapezoid &x);
    /// Comparison overloading
    bool RightTraopezoid  operator ==(const RightTrapezoid &x);
  
    /// @name BASIC HANDLING
    /// @{

    /// Default initialization
    void Init();
    /// Copy initialization
    void Init(const RightTrapezoid  &y);
    /// Object erasure
    void Reset();
   ///@{
    ///@name Getters / Setters
    ///@{
    void setDim (float t, float b, float h);
    void setTopSide (float t);
    void setBottomSide (float b);
    void setHeight (float h);
    
    float GetSide (float t, float b, float h);
    float Area();
    float Perimeter(); 
    


    /// Object printout for diagnostic
    void Dump();
    ///@}
};

#endif

}

#endif /* Right_Trapezoid_h */
