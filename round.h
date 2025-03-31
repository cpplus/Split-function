#include <math.h>


inline int roundTo(int num, int nearest)
{
    return round(double(num) / nearest) * nearest;
}

inline int floorTo(int num, int nearest)
{
    return floor(double(num) / nearest) * nearest;
}

inline int ceilTo(int num, int nearest)
{
    return ceil(double(num) / nearest) * nearest;
}
