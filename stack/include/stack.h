#ifndef LINKEDLIST_H
#define LINKEDLIST_H

#include <cstddef>
#include "node.h"
#include <stdarg.h>

/* Inspired from: https://en.cppreference.com/w/cpp/container/list */

class Stack
{  
    private:
        Node *head = nullptr;
    
        Node* createNode(const int data);
    
    public:
        Stack() {}
        Stack(int args, ...);
        ~Stack() {while(head != nullptr) pop();}
        //Element acces
        int top() {return head->data;}

        //Capacity
        bool const empty() {return ((head==nullptr) ?true :false);}
        size_t size();
        
        //Modifiers               
        void push(const int);
        void pop();
        void swap();
};

#endif
