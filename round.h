#include <math.h>


int roundTo(int num, int nearest)
{
    return round(double(num) / nearest) * nearest;
}

int floorTo(int num, int nearest)
{
    return floor(double(num) / nearest) * nearest;
}

int ceilTo(int num, int nearest)
{
    return ceil(double(num) / nearest) * nearest;
}
