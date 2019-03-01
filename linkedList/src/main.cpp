#include <iostream>
#include "linkedlist.h"
#include "iterator.h"

int main(void)
{
    std::cout << "start test: \n";
    LinkedList linkedList;
    linkedList.push_back(5);
    Iterator iterator = linkedList.end();
    std::cout << *iterator <<std::endl;
    //std::cout << linkedList.back;
    //std::cout << linkedList.front()<<std::endl;

    //linkedList.push_back(3);
    //std::cout << linkedList.back;
    //std::cout << linkedList.front;

    return 1;
}

