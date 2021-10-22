#include "map.h"

Map::Iterator::Iterator(const Map& parent, int line):ptr(parent.base[line]), parent(parent), line(line){}

Map::Iterator::Iterator(const Iterator& other):ptr(other.ptr), parent(other.parent), line(other.line){}

bool Map::Iterator::operator!=(const Iterator& other) const{
    return this->ptr != other.ptr;
}

bool Map::Iterator::operator==(const Iterator& other) const{
    return this->ptr == other.ptr;
}

Node* Map::Iterator::operator*() const{
    return this->ptr;
}

Map::Iterator& Map::Iterator::operator++(){
    if (parent.base[this->line]+parent.y-1 == this->ptr){
        this->line++;
        this->ptr=parent.base[this->line];
        return *this;
    }
    this->ptr++;
    return *this;
}

Map::Iterator& Map::Iterator::operator++(int){
    Iterator other(*this);
    if (parent.base[this->line]+parent.y-1 == this->ptr){
        this->line++;
        this->ptr=parent.base[this->line];
        return other;
    }
    this->ptr++;
    return other;
}

Map::Iterator& Map::Iterator::operator--(){
    if (parent.base[this->line] == this->ptr){
        this->line--;
        this->ptr=parent.base[this->line]+parent.y-1;
        return *this;
    }
    this->ptr--;
    return *this;
}

Map::Iterator& Map::Iterator::operator--(int){
    Iterator other(*this);
    if (parent.base[this->line] == this->ptr){
        this->line--;
        this->ptr=parent.base[this->line]+parent.y-1;
        return other;
    }
    this->ptr--;
    return other;
}
