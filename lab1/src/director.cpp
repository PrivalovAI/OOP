#include "director.h"

Map* Director::createMap(MapBuilder& builder){
    builder.createMap();
    builder.buildNode();
    return (builder.getMap());
}
