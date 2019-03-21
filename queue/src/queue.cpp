#include "queue.h"
#include <iostream>

Node *Queue::createNode(const int data)
{
    Node *newNode = new Node;
    newNode->data = data;
    newNode->next = nullptr;
    return newNode;
}

Queue::Queue(int args, ...)
{
     va_list ap;
     va_start(ap, args);
     push(args);
     for(int i = 0; i < args; i++)
        push(va_arg(ap, int));
     
     va_end(ap);
                   
} 

size_t Queue::size() 
{
    if (head == nullptr) return 0;
    if (head->next == nullptr) return 1;
    
    size_t size = 1;
    Node *lastNode = head;
    for(; lastNode->next!=nullptr ; lastNode = lastNode->next)
        size++;
    
    return size;
}

void Queue::push(const int data)
{
    Node *newNode = createNode(data);
    if(!empty())newNode->next = head;
    head = newNode;
}

void Queue::pop()
{
    if(empty()) return;
    if(size()==1) {
        delete head;
        head=nullptr;
        return;
    }

    Node *beforeLastNode;
    Node *lastNode = head;
    
    for(; lastNode->next!=nullptr ; lastNode=lastNode->next) {
        beforeLastNode = lastNode;
    }
    delete lastNode;
    beforeLastNode->next = nullptr;
}

