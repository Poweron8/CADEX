#pragma once
#include "curve.h"

class circle : public curve
{
public:
    circle() = delete;
    circle(float radius):curve() {_radius = radius;}
    ~circle() = default;
    virtual point GetPoint(float tRad)override;
private:
     float _radius{0};
};

