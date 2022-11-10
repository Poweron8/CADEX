#pragma once

#include "curve.h"
#include "circle.h"

class helix : public curve
{
public:
    helix() = delete;
    helix(float radius, float period = 2 * M_PI) : curve(), _circle(radius), _period(period){}
    point GetPoint(float tRad) override;
private:
    circle _circle{0};
    float _period{0};
};

