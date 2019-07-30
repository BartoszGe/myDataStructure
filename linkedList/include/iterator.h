#ifndef ITERATOR_H
#define ITERATOR_H

#include "node.h"

template <class T>
class Iterator
{
    private:
        const Node<T> *head;
        const Node<T> *iterator;

    public: 
        Iterator() : head(nullptr), iterator(nullptr) {};
        //Iterator(const Node *head): head(head) {iterator = head;}
        
        Iterator<T> begin() {return *this; }
        Iterator<T> end() 
        {
            for(; iterator->next!=nullptr; iterator=iterator->next);
            return *this;
        }
        
        void operator=(const Node<T> *node) {head = node; iterator = head;}
        T operator*() {return iterator->data;}
        void operator++() {iterator = iterator->next;}
        void operator++(T) {iterator = iterator->next;}
};

#endif

