#include "ellipse.h"


ellipse::ellipse(float radius1, float radius2) : curve(), _radius1(radius1), _radius2(radius2)
{
}

point ellipse::GetPoint(float tRad)
{
    point result;
    CutPeriod(tRad);
    float angle = atan2(sin(tRad) * _radius1, cos(tRad) * _radius2);
    result.x = cos(angle) * _radius1;
    result.y = sin(angle) * _radius2;
    //z = 0
    return result;
}

point ellipse::GetFirstDerivative(float tRad)
{
    point result;
    CutPeriod(tRad);
    float angle = atan2(sin(tRad) * _radius1, cos(tRad) * _radius2);
    result.x = -1 * sin(angle) * _radius1;
    result.y = cos(angle) * _radius2;
    //z = 0
    return result;
}
