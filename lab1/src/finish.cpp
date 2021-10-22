#include "finish.h"

Finish::Finish(){}

int Finish::call(){
    return 0;
}


Element* Finish::copy(){
    return new Finish;
}

Finish::~Finish(){}
