//
// Created by XPC on 19/3/2022.
//

#include "Derived2.h"
#include <iostream>
using namespace std;

Derived2::Derived2() {}
Derived2::~Derived2() {}
int Derived2::do_something() {
    return 2;
}
string Derived2::toString() {
    stringstream ss;
    ss<<do_something()<<endl;
    return ss.str();
}