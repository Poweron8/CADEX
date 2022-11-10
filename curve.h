#pragma once
#include "point.h"
#include <sys/types.h>
#include <cmath>

//base class for various curves
class curve
{
    virtual point GetPoint(float tRad) = 0;
public:
    curve() = default;
    virtual ~curve() = default;
};
