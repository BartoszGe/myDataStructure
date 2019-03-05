#include <iostream>
#include "iterator.h"


Iterator Iterator::begin()
{
    iterator = head;
    return *this;
}

Iterator Iterator::end()
{ 
    iterator = head;

    for(; iterator->next!=nullptr; iterator++);
        //std::cout<<"test end()"<<iterator->data<<std::endl;
	
    return *this;
}

