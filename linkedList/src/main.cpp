#include <iostream>
#include "linkedlist.h"
#include "iterator.h"

int main(void)
{
    std::cout << "start test: \n";
    LinkedList linkedList;
    linkedList.push_back(1);
    std::cout <<"test1: \n"<< linkedList.back()<<std::endl;
    std::cout <<"test1: \n"<< linkedList.front()<<std::endl;
    linkedList.push_back(2);
    std::cout <<"test2: \n"<< linkedList.back()<<std::endl;
    std::cout <<"test2: \n"<< linkedList.front()<<std::endl;
    linkedList.push_back(3);
    std::cout <<"test3: \n"<< linkedList.back()<<std::endl;
    std::cout <<"test3: \n"<< linkedList.front()<<std::endl;
    linkedList.push_back(4);
    std::cout << linkedList.back()<<std::endl;
    std::cout << linkedList.front()<<std::endl;

    //linkedList.push_back(3);
    //std::cout << linkedList.back();
    //std::cout << linkedList.front();

    return 1;
}

