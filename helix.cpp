#include "helix.h"


point helix::GetPoint(float tRad)
{
    point result;
    CutPeriod(tRad);
    result.x = _circle.GetPoint(tRad).x;
    result.y = _circle.GetPoint(tRad).y;
    result.z = tRad *_step/(2 * M_PI);
    return result;
}

point helix::GetFirstDerivative(float tRad)
{
    point result;
    //there is period cut inside _circle.FirstDerivative(tRad)
    result.x = _circle.GetFirstDerivative(tRad).x;
    result.y = _circle.GetFirstDerivative(tRad).y;
    result.z = _step/(2 * M_PI);
    return result;
}
