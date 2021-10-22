#ifndef DIRECTOR_H
#define DIRECTOR_H 1

#include "mapbuilder.h"

class Director
{
public:
    Map* createMap(MapBuilder& builder);
};

#endif // DIRECTOR_H
