#include "simplemap.h"

SimpleMap::SimpleMap():map(0){
}

SimpleMap::~SimpleMap(){}

void SimpleMap::createMap(){
    map=new Map(M,N);
}

void SimpleMap::buildNode(){
    if (map){
        Start* start = new Start;
        Finish* finish = new Finish;
        Element* tmp = static_cast<Element*>(start);
        map->setValue(tmp,0,0);
        tmp = static_cast<Element*>(finish);
        map->setValue(tmp,M-1,N-1);
    }
}
Map* SimpleMap::getMap(){
    return map;
}
