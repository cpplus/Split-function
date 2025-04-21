#include <cstring>

char* appendChar(char* str, char c) {
    if (str == nullptr) {
        char* newStr = new char[2];
        newStr[0] = c;
        newStr[1] = '\0';
        return newStr;
    }

    size_t len = strlen(str);
    char* newStr = new char[length + 2];
    strcpy(newStr, str);
    newStr[length] = c;
    newStr[length + 1] = '\0';
    delete[] str;
    return newStr;
}
