#include <iostream>
#include "iterator.h"


Iterator Iterator::begin()
{
    if(iterator != head) 
        iterator = head;

    return *this;
}

Iterator Iterator::end()
{ 
    if(iterator == nullptr)
        iterator = head;

    for(; iterator->next!=nullptr; iterator++)
        std::cout<<"test end()"<<iterator->data<<std::endl;
	
    return *this;
}

