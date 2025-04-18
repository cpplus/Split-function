int randWithPercent(std::map<int, int> values) {
    int mean = 0;
    for (const auto& pair : values) 
        mean+=pair.second;
    mean/=values.size();
} 
