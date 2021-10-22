#ifndef NODE_H
#define NODE_H 1

#include<iostream>
#include "element.h"

class Node{
protected:
    bool state;
    Element* value;
public:
    Node(bool state=false, Element* value=0);
    Node(const Node& other);
    Node(Node&& other);
    Node& operator=(const Node& other);
    Node& operator=(Node&& other);
    bool isEmpty();
    ~Node();
};

#endif // NODE_H
