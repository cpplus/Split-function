// central tendancy
struct CtrTen {
    double mean, median, mode;
}

CtrTen getCT(std::vector<int> vals) {
    CtrTen ct;
    
    // get mean
    for (int i = 0; i < vals.size(); i++)
        ct.mean += vals[i];
    ct.mean /= vals.size();
} 
