#ifndef TRAJSAMPLER_H
#define TRAJSAMPLER_H

#include <vector>

#include "bezierpath.h"

class TrajSampler
{
public:
    TrajSampler(const BezierPath& path);

    std::vector<point> sample(int density);

private:
    const BezierPath& bpath;
};

#endif // TRAJSAMPLER_H
