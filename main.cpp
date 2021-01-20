#include <iostream>
#include <string>
#include "c-echo.h"
#include "c-count.h"

int main() {
    std::cout<<"Count of output: "<<count(echo(argv, argc))<<std::endl;

    return 0;
}
