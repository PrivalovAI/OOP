#ifndef MAPBUILDER_H
#define MAPBUILDER_H 1

#include "map.h"
#include "start.h"
#include "finish.h"

class MapBuilder
{
protected:
    Map* map;
public:
    virtual ~MapBuilder()=default;
    virtual void createMap()=0;
    virtual void buildNode()=0;
    virtual Map* getMap()=0;
};

#endif // MAPBUILDER_H
