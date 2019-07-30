#ifndef QUEUE_H
#define QUEUE_H

#include "linkedlist.h"

/* Inspired: https://en.cppreference.com/w/cpp/container/queue */

template <typename T>
class Queue
{  
    private:
        LinkedList<T> *linkedList = nullptr;
    public:
        // Constructors & Destructor
        Queue();
        Queue(const Queue<T> &Queue);
        ~Queue();

        // //Element acces
        T front() const {return linkedList->back();}
        T back() const {return linkedList->front();}

        // //Capacity
        bool empty() const {return linkedList->empty();}
        size_t size() const {return linkedList->size();}
        
        // //Modifiers               
        void push(const T& data) {linkedList->push_front(data);};
        void pop() {linkedList->pop_back();}
        // void swap();
};

template <class T>
Queue<T>::Queue()
{
    if(linkedList!=nullptr) {
        this->~Queue();
    }

    LinkedList<T> *newLinkedList = new LinkedList<T>();
    linkedList = newLinkedList;
}

template <class T>
Queue<T>::Queue(const Queue<T> &Queue)
{
    if(linkedList!=nullptr) {
        this->~Queue();
    }

    LinkedList<T> *newLinkedList = new LinkedList<T>(*Queue.linkedList);
    linkedList = newLinkedList;
}

template <class T>
Queue<T>::~Queue()
{
    delete linkedList;
    linkedList = nullptr;
}

#endif
