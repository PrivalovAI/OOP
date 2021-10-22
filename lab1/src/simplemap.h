#ifndef SIMPLEMAP_H
#define SIMPLEMAP_H 1

#define M 7
#define N 9

#include "mapbuilder.h"

class SimpleMap : public MapBuilder
{
protected:
    Map* map;
public:
    SimpleMap();
    ~SimpleMap();
    void createMap();
    void buildNode();
    Map* getMap();
};

#endif // SIMPLEMAP_H
