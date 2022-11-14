#pragma once

#include "curve.h"
#include "circle.h"

class helix : public curve
{
public:
    helix() = delete;
    helix(float radius, float step) : curve(), _circle(radius), _step(step){}
    point GetPoint(float tRad) override;
    point GetFirstDerivative(float tRad) override;
    virtual curveType GetType() override {return ctHelix;}
    virtual float GetRadius() override {return _circle.GetRadius();}
private:
    circle _circle{0};
    float _step{0};
};

