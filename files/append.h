#include <cstring>

const char* appendChar(char* str, char c) {
    if (str == nullptr)
        return c + "\0";

    size_t length = strlen(str);
    char* newStr = new char[length + 2];
    strcpy(newStr, str);
    newStr[length] = c;
    newStr[length + 1] = '\0';
    delete[] str;
    return newStr;
} 
