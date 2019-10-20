#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
A::A(){}
A::~A(){}
A::A(const A &ob){(void)ob;}
A &A::operator=(const A &ob){(void)ob; return (*this);}