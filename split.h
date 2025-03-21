#include <string>
#include <string.h>
#include <vector>

std::vector<std::string> split(std::string str, std::string delimiter)
{
    char* cstr = const_cast<char*>(str.c_str());
    char* current = strtok(cstr, delimiter.c_str());
    std::vector<std::string> arr;
    
    while(current != NULL){
        arr.push_back(current);
        current = strtok(NULL, delimiter.c_str());
    }
    return arr;
}
