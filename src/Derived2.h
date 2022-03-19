//
// Created by XPC on 19/3/2022.
//

#ifndef LAB01_INHERITANCE_DERIVED2_H
#define LAB01_INHERITANCE_DERIVED2_H
#include "Base.h"

using namespace std;

class Derived2: public Base{
public:
    Derived2();
    virtual ~Derived2();
    int do_something();
    string toString();
};


#endif //LAB01_INHERITANCE_DERIVED2_H
