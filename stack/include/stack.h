#ifndef STACK_H
#define STACK_H

#include "vector.h"

/* Inspired: https://en.cppreference.com/w/cpp/container/stack */

template <typename T>
class Stack
{  
    private:
        Vector<T> *vector = nullptr;
    public:
        // Constructors & Destructor
        Stack();
        Stack(const Stack<T> &stack);
        // Stack(int args, ...);
        ~Stack();

        // //Element acces
        T &top() const {return vector->back();}

        // //Capacity
        bool empty() const {return vector->empty();}
        size_t size() const {return vector->size();}
        
        // //Modifiers               
        void push(const T& data) {vector->push_back(data);};
        void pop() {vector->pop_back();}
        // void swap();
};

template <class T>
Stack<T>::Stack()
{
    if(vector!=nullptr) {
        this->~Stack();
    }

    Vector<T> *newVector = new Vector<T>();
    vector = newVector;
}

template <class T>
Stack<T>::Stack(const Stack<T> &stack)
{
    if(vector!=nullptr) {
        this->~Stack();
    }

    Vector<T> *newVector = new Vector<T>(*stack.vector);
    vector = newVector;
}

template <class T>
Stack<T>::~Stack()
{
    delete vector;
    vector = nullptr;
}

#endif
