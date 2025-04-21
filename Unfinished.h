#include <vector>
#include <unordered_map>
#include <algorithm>
#include <numeric>

// Central Tendancy
struct CT {
    double mean, median, mode;
};

CT getCT(std::vector<int> vals) {
    CT ct;
    if(vals.empty())
        return ct;
    
    // mean
    {
        ct.mean = std::accumulate(vals.begin(), vals.end(), 0.0) / vals.size();
    }
    
    // median
    {
        std::sort(vals.begin(), vals.end());
        if (vals.size() % 2 == 0) // even
                ct.median = (vals[vals.size() / 2 - 1] + vals[vals.size() / 2]) / 2.0;
        else // odd
                ct.median = vals[vals.size() / 2];
    }

    // mode
    {
        std::unordered_map<int, int> values;
        for (int num : vals)
            values[num]++;
    
        int maxCount = 0;
        for (const auto& pair : values)
            if (pair.second > maxCount) {
                maxCount = pair.second;
                ct.mode = pair.first;
            }
    }  
    
    return ct;
} 
