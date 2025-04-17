#include <random>
#include <cstring>
const int random(const int min, const int max) {
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<> distrib(min, max);
    return distrib(gen);
}

const char randChar(const char* charset = AsciiCharset) {
    return charset[ random(0, std::strlen(charset) - 1) ];
} 
