#include "Pony.hpp"

Pony    *ponyOnTheHeap(){
    Pony *myLittleHeapPony = new Pony("Heap");
    myLittleHeapPony->eating();
    return (myLittleHeapPony);
}

Pony    ponyOnTheStack(){
    Pony myLittleStackPony = Pony("Stack");
    myLittleStackPony.eating();
    return (myLittleStackPony);
}

int     main(){
    Pony *myLittleHeapPony;
    Pony myLittleStackPony = ponyOnTheStack();
    myLittleHeapPony = ponyOnTheHeap();
    delete myLittleHeapPony;
}