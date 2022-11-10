#include "circle.h"

point circle::GetPoint(float tRad)
{
    point result;
    result.x = _radius * cos(tRad);
    result.y = _radius * sin(tRad);
    //z = 0;
    return result;
}
