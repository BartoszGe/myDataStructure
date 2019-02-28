#ifndef LINKEDLIST_H
#define LINKEDLIST_H

#include <cstddef>
#include <iostream>

#include "node.h"
#include "iterator.h"

/* Inspired from: https://en.cppreference.com/w/cpp/container/list */

class LinkedList
{  
    private:
        Node *head = nullptr;
      
    public:
       //LinkedList();

       ///Element access
        int front();
        //int back() {return head->data;}
                
        ////Iterators
        //Iterator begin();
        Iterator end();
        
        ////Capacity
        bool const empty();
        //size_t size();       
        
        ////Modifiers               
        void push_back(const int);
        //void push_front(const int);
};

#endif
