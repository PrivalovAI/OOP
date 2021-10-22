#ifndef FINISH_H
#define FINISH_H

#include"element.h"

class Finish : public virtual Element{
public:
    Finish();
    int call();
    Element* copy();
    ~Finish();
};

#endif // FINISH_H
