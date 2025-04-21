#include <vector>
#include <unordered_map>
// Central Tendancy
struct CT {
    double mean, median, mode;
};

CT getCT(std::vector<int> vals) {
    CT ct;
    
    // get mean
    for (int i = 0; i < vals.size(); i++)
        ct.mean += vals[i];
    ct.mean /= vals.size();

    // get mode
    std::unordered_map<int, int> counts;
    for (int num : vals) {
        counts[num]++;
    }

    int maxCount = 0;
    for (const auto& pair : counts) {
        if (pair.second > maxCount) {
            maxCount = pair.second;
            ct.mode = pair.first;
        }
    }

    return ct;
} 
