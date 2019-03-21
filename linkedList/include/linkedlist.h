#ifndef LINKEDLIST_H
#define LINKEDLIST_H

#include <cstddef>

#include "node.h"
#include "iterator.h"
#include <stdarg.h>
#include <iostream>

/* Inspired from: https://en.cppreference.com/w/cpp/container/list */

class LinkedList
{  
    private:
        Node *head = nullptr;
        Iterator iterator;

        void createFirstNode(Node *newNode);
    public:
        LinkedList() {}
        LinkedList(int args, ...);
        //~LinkedList() {while(head != nullptr) pop_back();}
        //Element acces
        int front() {return *iterator.end(); }
        int back() {return *iterator.begin(); }

        //Iterators
        Iterator begin() {return iterator.begin();}
        Iterator end() {return iterator.end();}
        
        //Capacity
        bool const empty() {return ((head==nullptr) ?true :false);}
        size_t size();       
        
        //Modifiers               
        void push_back(const int);
        void pop_back();
        void push_front(const int);
        void pop_front();
};

#endif
