#ifndef ELEMENT_H
#define ELEMENT_H 1

class Element{
public:
    virtual int call()=0;
    virtual Element* copy()=0;
    virtual ~Element()=default;
};

#endif // ELEMENT_H
