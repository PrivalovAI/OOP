#include "wall.h"

Wall::Wall(){}

int Wall::call(){
    return 0;
}


Element* Wall::copy(){
    return new Wall;
}

Wall::~Wall(){}
