#include "helix.h"


point helix::GetPoint(float tRad)
{
    point result;
    result.x = _circle.GetPoint(tRad).x;
    result.y = _circle.GetPoint(tRad).y;
    result.z = tRad / _period;
    return result;
}
