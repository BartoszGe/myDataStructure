#include "stack.h"
#include <iostream>

Stack::Stack(int args, ...)
{
     va_list ap;
     va_start(ap, args);
     push(args);
     for(int i = 0; i < args; i++)
        push(va_arg(ap, int));
     
     va_end(ap);
                   
} 

size_t Stack::size() 
{
    if (head == nullptr) return 0;
    if (head->next == nullptr) return 1;
    
    size_t size = 1;
    Node *lastNode = head;
    for(; lastNode->next!=nullptr ; lastNode = lastNode->next)
        size++;
    
    return size;
}

Node *createNewNode(const int data)
{
    Node *newNode = new Node;
    newNode->data = data;
    newNode->next = nullptr;
    return newNode;
}

void Stack::push(const int data)
{
    Node *newNode = createNewNode(data);
    if(empty()) {
        delete head;
        head = newNode;
        return;
    } 
    newNode->next = head;
    head = newNode;
}

void Stack::pop()
{
    if(empty()) return;
    if(size()==1)
    {
        delete head;
        head=nullptr;
        return;
    }

    Node *newHead = head->next;
    delete head;
    head = newHead;
}

