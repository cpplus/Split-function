#include <random>
#include <cstring>
#include <string>
#include <map>

#include "AsciiCharset.h"

// returns a random number based on min and max. 
// min: the minimum number that can be returned.
// max: the maximum number that can be returned. 
const int random(const int min, const int max) {
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<> distrib(min, max);
    return distrib(gen);
}
// returns a random character based on the charset.
// charset: the charset to be used.
const char randChar(const char* charset = AsciiCharset()) {
    return charset[ random(0, std::strlen(charset) - 1) ];
} 
// returns a random string based on the charset and length.
// charset: the charset to be used.
// length: the length of the string to be returned. 
const char* randStr(const int length, const char* charset = AsciiCharset()) {
    std::string str = "";
    for (int i = 0; i < length; i++)
        str += randChar(charset);
    char* chr = new char[str.size() + 1];
    std::strcpy(chr,str.c_str());
    return chr;
} 

/*returns a random number based on the percentages. 
* the first int in values: valueant. the second int
* the second int in values: the percentage to use. 
* the percentages do not have to add up to 100. 
*/
int randWithPercent(std::map<int, int> values) {
    int addPerc = 0;
    for (const auto& pair : values) 
        addPerc+=pair.second;
    
    int vals[addPerc];
    int currentNum = 0;
    for (const auto& pair : values)
        for (int i = 0; i < pair.second; i++) 
            vals[currentNum++] = pair.first;
    
     return vals[random(0, addPerc - 1)];
}
