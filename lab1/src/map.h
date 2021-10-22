#ifndef MAP_H
#define MAP_H 1

#include <iostream>
#include "node.h"

class Map{
protected:
    int x,y;
    Node** base;

public:
    Map(int a=1, int b=1);
    ~Map();
    Map(const Map& other);
    Map(Map&& other);
    Map& operator=(const Map& other);
    Map& operator=(Map&& other);

    void setValue(Element* value, int x, int y);

    class Iterator{
    protected:
        const Map& parent;
        Node* ptr;
        int line;
    public:
        Iterator(const Map& parent, int line);
        Iterator(const Iterator& other);
        bool operator!=(const Iterator& other) const;
        bool operator==(const Iterator& other) const;
        Node* operator*() const;
        Iterator& operator++();
        Iterator& operator++(int);
        Iterator& operator--();
        Iterator& operator--(int);
    };

    Iterator begin();
    Iterator end();
};
#endif // MAP_H
