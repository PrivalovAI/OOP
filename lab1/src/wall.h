#ifndef WALL_H
#define WALL_H 1

#include"element.h"

class Wall : public virtual Element{
public:
    Wall();
    int call();
    Element* copy();
    ~Wall();
};

#endif
