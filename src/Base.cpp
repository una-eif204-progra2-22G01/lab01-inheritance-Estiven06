//
// Created by XPC on 19/3/2022.
//

#include "Base.h"

Base::Base() {}
Base::~Base() {}

void Base::do_something() {
    cout<<"Base";
}

const string &Base::getName() const {
    return name;
}

void Base::setName(const string &name) {
    Base::name = name;
}

ostream &operator<<(ostream &os, const Base &base) {
    os<<"name: "<<base.name;
    return os;
}

