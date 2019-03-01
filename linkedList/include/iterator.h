#ifndef ITERATOR_H
#define ITERATOR_H

#include "node.h"

class Iterator
{
    private:
        const Node *head;
        const Node *iterator;

    public:
        Iterator(const Node *head): head(head) {iterator = head;}
       
        Iterator begin();
        Iterator end();
        
        Node operator=(const Node *node) {iterator = node;}
        int operator*() {return iterator->data;}
        void operator++() {iterator = iterator->next;}
};

#endif

