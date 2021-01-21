#include <iostream>
#include <string>
#include "c-echo.h"
#include "c-count.h"

int main(int argc, char ** argv) {
    std::cout<<"Count of output: "<<count(echo(argc, argv))<<std::endl;

    return 0;
}
