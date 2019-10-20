#include "C.hpp"
C::C(){}
C::~C(){}
C::C(const C &ob){(void)ob;}
C &C::operator=(const C &ob){(void)ob; return (*this);}