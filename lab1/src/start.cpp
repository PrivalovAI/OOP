#include "start.h"

Start::Start(){}

int Start::call(){
    return 0;
}


Element* Start::copy(){
    return new Start;
}

Start::~Start(){}
