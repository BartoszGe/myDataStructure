#ifndef LINKEDLIST_H
#define LINKEDLIST_H

#include <cstddef>

#include "node.h"
#include "iterator.h"
#include <stdarg.h>

/* Inspired from: https://en.cppreference.com/w/cpp/container/list */

template <typename T>
class LinkedList
{  
    private:
        Node<T> *head = nullptr;
        Iterator<T> iterator;

        Node<T>* createNewNode(const T data);
    public:
        LinkedList() {}
        LinkedList(T args, ...);

        ~LinkedList() {while(head != nullptr) pop_back();}
        //Element acces
        T front() {return *iterator.end(); }
        T back() {return *iterator.begin(); }

        //Iterators
        Iterator<T> begin() {return iterator.begin();}
        Iterator<T> end() {return iterator.end();}
        
        //Capacity
        bool const empty() {return ((head==nullptr) ?true :false);}
        size_t size();       
        
        //Modifiers               
        void push_back(const T);
        void pop_back();
        void push_front(const T);
        void pop_front();
};

template <class T>
Node<T> *LinkedList<T>::createNewNode(const T data)
{
    Node<T> *newNode = new Node<T>;
    newNode->data = data;
    newNode->next = nullptr;
    return newNode;
}

template <class T>
LinkedList<T>::LinkedList(T args, ...)
{
     va_list ap;
     va_start(ap, args);
     push_front(args);
     for(T i = 0; i < args; i++)
        push_front(va_arg(ap, T));
     
     va_end(ap);
                   
} 

template <class T>
size_t LinkedList<T>::size() 
{
    if (head == nullptr) return 0;
    if (head->next == nullptr) return 1;
    
    size_t size = 1;
    Node<T> *lastNode = head;
    for(; lastNode->next!=nullptr ; lastNode = lastNode->next)
        size++;
    
    return size;
}

template <class T>
void LinkedList<T>::push_back(const T data)
{
    Node<T> *newNode = createNewNode(data);
    if(!empty())newNode->next = head;
    head = newNode;
    iterator = head;
}

template <class T>
void LinkedList<T>::pop_back()
{
    if(empty()) return;
    if(size()==1) {
        delete head;
        head=nullptr;
        return;
    }

    Node<T> *newHead = head->next;
    delete head;
    head = newHead;
    iterator = head;
}

template <class T>
void LinkedList<T>::push_front(const T data)
{
    Node<T> *newNode = createNewNode(data);
    
    if(empty()) {
        head = newNode;
        iterator = head;
        return;
    }
      
    Node<T> *lastNode = head;
    for(; lastNode->next!=nullptr ; lastNode=lastNode->next);
    
    lastNode->next = newNode;
    iterator = head;
}

template <class T>
void LinkedList<T>::pop_front()
{
    if(empty()) return;
    if(size()==1) {
        delete head;
        head=nullptr;
        return;
    }

    Node<T> *beforeLastNode;
    Node<T> *lastNode = head;
    
    for(; lastNode->next!=nullptr ; lastNode=lastNode->next) {
        beforeLastNode = lastNode;
    }
    delete lastNode;
    beforeLastNode->next = nullptr;
}

#endif
