#include <math.h>
int roundTo(int num, int nearest)
{
    return round(double(num) / nearest) * nearest;
}
