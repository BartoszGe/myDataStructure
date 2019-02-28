#ifndef ITERATOR_H
#define ITERATOR_H

#include "node.h"

class Iterator
{
    private:
        const Node *iterator;
	int testData;
    public:
        Iterator() {testData = 1;}
        Iterator(const Node *head): iterator(head) {}
        //Iterator begin()
        Iterator end();
        
        Node operator=(const Node *node) {iterator = node;}
        int operator*() {return iterator->data;}
        //void operator++() {iterator = iterator->next;}

	//Test
        int testInt() {return testData;}
};

#endif

