#include <iostream>
#include "linkedlist.h"
#include "iterator.h"

int main(void)
{
    std::cout << "start test: \n";
    LinkedList linkedList;
    linkedList.push_back(11);
    linkedList.push_front(111);
    std::cout <<"back test1: \n"<< linkedList.back()<<std::endl;
    std::cout <<"front test1: \n"<< linkedList.front()<<std::endl<<std::endl;
    std::cout <<"size:\n"<<linkedList.size()<<std::endl<<std::endl;
    linkedList.push_front(222);
    linkedList.push_back(22);
    std::cout <<"back test2: \n"<< linkedList.back()<<std::endl;
    std::cout <<"front test2: \n"<< linkedList.front()<<std::endl<<std::endl;
    std::cout <<"size:\n"<<linkedList.size()<<std::endl<<std::endl;
    linkedList.push_front(333);
    linkedList.push_back(33);
    std::cout <<"back test3: \n"<< linkedList.back()<<std::endl;
    std::cout <<"front test3: \n"<< linkedList.front()<<std::endl<<std::endl;
    std::cout <<"size:"<<linkedList.size()<<std::endl<<std::endl;
    linkedList.push_back(44);
    linkedList.push_front(444);
    std::cout <<"back test4: \n"<< linkedList.back()<<std::endl;
    std::cout <<"front test4: \n"<< linkedList.front()<<std::endl<<std::endl;
    std::cout <<"size:"<<linkedList.size()<<std::endl<<std::endl;

    return 1;
}

