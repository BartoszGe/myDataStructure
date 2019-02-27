#ifndef LINKEDLIST_H
#define LINKEDLIST_H

#include "Iterator.h"

class LinkedList
{


    private:

        struct node {
            int data;
            struct node *next;
        };

        struct node *head = NULL;
       
        //Iterator iterator;

    public:       

//      Element access
        int front();
        int back() {return head->data;}
        
//      Iterators
        int begin();
        int end();

        
        bool const empty();
        
        struct node* front_node();
        
        void push_back(const int data);
        void push_front(const int data);
        
    




};

#endif
