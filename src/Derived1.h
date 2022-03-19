//
// Created by XPC on 19/3/2022.
//

#ifndef LAB01_INHERITANCE_DERIVED1_H
#define LAB01_INHERITANCE_DERIVED1_H
#include "Base.h"

using namespace std;

class Derived1: public Base{
public:
    Derived1();
    virtual ~Derived1();
    int do_something();
    string toString();
};


#endif //LAB01_INHERITANCE_DERIVED1_H
