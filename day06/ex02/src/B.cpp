#include "B.hpp"
B::B(){}
B::~B(){}
B::B(const B &ob){(void)ob;}
B &B::operator=(const B &ob){(void)ob; return (*this);}