#ifndef ITERATOR_H
#define ITERATOR_H

#include "LinkedList.h"

class Iterator
{
    private:
        struct Node *iterator;
        int cos;

    public:
        //Iterator();
        //Iterator(Node *head) :iterator(*head);
        Iterator(int);
        //Iterator begin()
        //Iterator end();
        
        ////Node operator=(const Node *head) {iterator = head;}
        //Node->data operator*() {return iterator->data;}
        ////void operator++() {iterator = iterator->next;}
        //int returnData() {return iterator->data;}
};

#endif
