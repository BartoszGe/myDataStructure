#include "Iterator.h"
#include <iostream>

Iterator::Iterator(int in): cos(in) {}

Iterator Iterator::begin()
{
    return *this;
}
Iterator Iterator::end()
{
    //for(; iterator->next!=nullptr; Iterator++)
    return *this; 
}
 

