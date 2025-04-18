#include <random>
#include <cstring>
#include <string>

#include "AsciiCharset.h"

const int random(const int min, const int max) {
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<> distrib(min, max);
    return distrib(gen);
}

const char randChar(const char* charset = AsciiCharset()) {
    return charset[ random(0, std::strlen(charset) - 1) ];
} 

const char* randStr(const int length, const char* charset = AsciiCharset()) {
    std::string str = "";
    for (int i = 0; i < length; i++)
        str += randChar(charset);
    char* chr = new char[str.size() + 1];
    std::strcpy(chr,str.c_str());
    return chr;
} 
