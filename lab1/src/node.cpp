#include "node.h"

Node::Node(bool state, Element* value):state(state),value(value){}

Node::~Node(){
    if (this->state){
        delete this->value;
    }
}

Node::Node(const Node& other):state(other.state){
    if (this->state){
        this->value = other.value->copy();
    }
    else {this->value = 0;}
}

Node::Node(Node&& other){
    if (this != &other){
        std::swap(state,other.state);
        std::swap(value,other.value);
    }
}

Node& Node::operator=(const Node& other){
    if (this != &other){
        if (this->state){
            delete this->value;
        }
        this->state = other.state;
        if (this->state){
            this->value = other.value->copy();
        }
    }
    return *this;
}

Node& Node::operator=(Node&& other){
    if (this != &other){
        std::swap(state,other.state);
        std::swap(value,other.value);
    }
    return *this;
}

bool Node::isEmpty(){ return !state; }
