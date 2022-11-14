#pragma once
#include "curve.h"

class circle : public curve
{
public:
    circle() = delete;
    circle(float radius):curve() {_radius = radius;}
    ~circle() = default;
    virtual point GetPoint(float tRad)override;
    virtual point GetFirstDerivative(float tRad) override;
    virtual curveType GetType() override {return ctCircle;}
    virtual float GetRadius() override {return _radius;}
private:
     float _radius{0};
};

