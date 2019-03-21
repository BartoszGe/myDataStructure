#include "linkedlist.h"
#include <iostream>

Node *LinkedList::createNewNode(const int data)
{
    Node *newNode = new Node;
    newNode->data = data;
    newNode->next = nullptr;
    return newNode;
}

LinkedList::LinkedList(int args, ...)
{
     va_list ap;
     va_start(ap, args);
     push_front(args);
     for(int i = 0; i < args; i++)
        push_front(va_arg(ap, int));
     
     va_end(ap);
                   
} 

size_t LinkedList::size() 
{
    if (head == nullptr) return 0;
    if (head->next == nullptr) return 1;
    
    size_t size = 1;
    Node *lastNode = head;
    for(; lastNode->next!=nullptr ; lastNode = lastNode->next)
        size++;
    
    return size;
}

void LinkedList::push_back(const int data)
{
    Node *newNode = createNewNode(data);
    if(!empty())newNode->next = head;
    head = newNode;
    iterator = head;
}

void LinkedList::pop_back()
{
    if(empty()) return;
    if(size()==1) {
        delete head;
        head=nullptr;
        return;
    }

    Node *newHead = head->next;
    delete head;
    head = newHead;
    iterator = head;
}

void LinkedList::push_front(const int data)
{
    Node *newNode = createNewNode(data);
    
    if(empty()) {
        head = newNode;
        iterator = head;
        return;
    }
      
    Node *lastNode = head;
    for(; lastNode->next!=nullptr ; lastNode=lastNode->next);
    
    lastNode->next = newNode;
    iterator = head;
}

void LinkedList::pop_front()
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

