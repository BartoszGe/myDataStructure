#ifndef LINKEDLIST_H
#define LINKEDLIST_H

#include "Iterator.h"
#include <cstddef>
#include <iostream>
        
/* Inspired from: https://en.cppreference.com/w/cpp/container/list */

class Iterator;
    
struct Node
{
    int data;
    struct node *next;
};


class LinkedList
{  
    private:
        Node *head = nullptr;
      
    public:
        //LinkedList();

        ////Element access
        //int front();
        //int back() {return head->data;}
                
        ////Iterators
        //Iterator begin();
        //Iterator end();
        
        ////Capacity
        //bool empty();
        //size_t size();       
        
        ////Modifiers               
        //void push_back(const int);
        //void push_front(const int);

        //Test
        int testIterator() 
        {
            int cos = 5;
            Iterator iterator(cos);
            //Iterator iterator(*head);
            //return iterator.returnData(); 
        }
};

#endif
