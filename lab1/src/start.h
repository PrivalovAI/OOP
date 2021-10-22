#ifndef START_H
#define START_H

#include"element.h"

class Start : public virtual Element{
public:
    Start();
    int call();
    Element* copy();
    ~Start();
};

#endif // START_H
