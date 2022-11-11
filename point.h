#pragma once

//contains the coordinates of the 3D point
struct point
{
    using coord = float;
public:
    point() = default;
    ~point() = default;
    point(coord xCoord, coord yCoord, coord zCoord);
    coord x{0};
    coord y{0};
    coord z{0};
};

