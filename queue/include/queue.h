#ifndef LINKEDLIST_H
#define LINKEDLIST_H

#include <cstddef>
#include "node.h"
#include <stdarg.h>
#include <iostream>

/* Inspired from: https://en.cppreference.com/w/cpp/container/queue */

class Queue
{  
    private:
        Node *head = nullptr;

        Node* createNode(const int data);

    public:
        Queue() {}
        Queue(int args, ...);
        ~Queue() {while(head != nullptr) pop();}
        
        //Element acces
        int front();
        int back() {return head->data; }

        //Capacity
        bool const empty() {return ((head==nullptr) ?true :false);}
        size_t size();       
        
        //Modifiers               
        void push(const int);
        void pop();
};

#endif
