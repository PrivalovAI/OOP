#include "map.h"
#include "director.h"
#include "simplemap.h"
#include<iostream>

int main(){
    Director director;
    SimpleMap build;

    Map* e=director.createMap(build);

    for(auto x: *e){ std::cout << x << "\t"; }
    std::cout << "\n";

    Map a(1,3);

    for(auto x=a.begin(); x!=a.end(); x++){ std::cout << *x << "\t"; }
    std::cout << "\n";
    Map b=a;

    for(auto x: b){ std::cout << x << "\t"; }
    std::cout << "\n";
    Map c;
    c=a;
    c=*e;

    for(auto x: c){ std::cout << x << "\t"; }
    std::cout << "\n";

    delete e;

}
