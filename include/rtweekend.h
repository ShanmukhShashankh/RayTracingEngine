#ifndef RTWEEKEND_H
#define RTWEEKEND_H

// common header file for the project

#include<cmath>
#include<limits>
#include<memory>

using std::make_shared;
using std::shared_ptr;

const double infinity = std::numeric_limits<double>::infinity();
const double pi = 3.1415926535897932385;

inline double degrees_to_radians(double degrees){
    return degrees * pi / 180.0;
}


#endif