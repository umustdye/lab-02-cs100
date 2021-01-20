#include <iostream>

std::string echo(int length, char **chars) {
    
    std::string ret = "";
    for(int i = 1; i < length; ++i) {
        ret += chars[i];
        if(i < length - 1 && chars[i][0] != '\0') {
            ret += " ";
        }
    }

    return ret;
}
