#include "map.h"

Map::Map(int a, int b):x(a),y(b){
    this->base = new Node*[x+1];
    for (int i=0; i<x; i++){
        this->base[i] = new Node[y];
    }
}

Map::~Map(){
    for (int i=0; i<x; i++){
        delete[] this->base[i];
    }
    delete[] this->base;
}

Map::Iterator Map::begin(){
    return Iterator(*this, 0);
}
Map::Iterator Map::end(){
    return Iterator(*this, this->x);
}

Map::Map(const Map& other):x(other.x),y(other.y){
    this->base = new Node*[x+1];
    for (int i=0; i<x; i++){
        this->base[i] = new Node[y];
        for(int j=0;j<y;j++){
            this->base[i][j] = other.base[i][j];
        }
    }
}

Map::Map(Map&& other){
    std::swap(x, other.x);
    std::swap(y, other.y);
    std::swap(this->base, other.base);
}

Map& Map::operator=(const Map& other){
    if(this != &other){
        for (int i=0; i<x; i++){
            delete[] this->base[i];
        }
        delete[] this->base;
        x=other.x; y=other.y;

        this->base = new Node*[x];
        for (int i=0; i<x; i++){
            this->base[i] = new Node[y];
            for(int j=0;j<y;j++){
                this->base[i][j] = other.base[i][j];
            }
        }
    }
    return *this;
}

Map& Map::operator=(Map&& other){
    if(this != &other){
        std::swap(x, other.x);
        std::swap(y, other.y);
        std::swap(this->base, other.base);
    }
    return *this;
}

void Map::setValue(Element* value, int x, int y){
    base[x][y] = Node(true, value);
}
