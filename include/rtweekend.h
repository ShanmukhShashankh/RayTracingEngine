#ifndef RTWEEKEND_H
#define RTWEEKEND_H

// common header file for the project

#include<cmath>
#include<limits>
#include<memory>
#include<iostream>

using std::make_shared;
using std::shared_ptr;

const double infinity = std::numeric_limits<double>::infinity();
// const double pi = 3.1415926535897932385;
const double pi = M_PI;

inline double degrees_to_radians(double degrees){
    return degrees * pi / 180.0;
}

#include "color.h"
#include "ray.h"

#endif
