#include "linkedlist.h"
#include <iostream>

Node *createNewNode(const int data)
{
    Node *newNode = new Node;
    newNode->data = data;
    newNode->next = nullptr;
    return newNode;
}

bool const LinkedList::empty()  
{ 
    if(head == nullptr) 
       return true; 
 
    return false; 
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

void LinkedList::createFirstNode(Node *newNode)
{
    head = newNode;
    iterator = head;
}

void LinkedList::push_back(const int data)
{
    Node *newNode = createNewNode(data);

    if(!empty())newNode->next = head;

    head = newNode;
    iterator = head;
   
    return;
}

void LinkedList::push_front(const int data)
{
    
    Node *newNode = createNewNode(data);
    
    if(empty()) {
        createFirstNode(newNode);
        return;
    }
    
    Node *lastNode = head;
    for(; lastNode->next!=nullptr ; lastNode=lastNode->next);
    
    lastNode->next = newNode;
    iterator = head;
}

