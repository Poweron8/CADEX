#pragma once

#include "curve.h"

class ellipse : public curve
{
public:
    ellipse() = delete;
    ellipse(float radius1, float radius2);
    ~ellipse() = default;
    point GetPoint(float tRad) override;
    point GetFirstDerivative(float tRad) override;
    virtual curveType GetType() override {return ctEllipse;}
private:
    float _radius1{0};
    float _radius2{0};
};

