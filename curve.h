#pragma once
#include "point.h"
#include <sys/types.h>
#include <cmath>

//base class for various curves
class curve
{
public:
    enum curveType
    {
        ctCircle,
        ctEllipse,
        ctHelix,
        ctCount
    };
    curve() = default;
     virtual ~curve() = default;
    virtual point GetPoint(float tRad) = 0;
    virtual point GetFirstDerivative(float tRad) = 0;
    virtual curveType GetType() = 0;
    virtual float GetRadius() {return -1;}

protected:

};
