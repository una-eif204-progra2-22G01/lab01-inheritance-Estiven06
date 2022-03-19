//
// Created by XPC on 19/3/2022.
//

#include "Derived1.h"
#include <iostream>
using namespace std;

Derived1::Derived1() {}

int Derived1::do_something() {
    return 1;
}
string Derived1::toString() {
    stringstream ss;
    ss<<do_something()<<endl;
    return ss.str();
}

Derived1::~Derived1() {

}
