#ifndef LINKEDLIST_H
#define LINKEDLIST_H

#include "vector.h"

/* Inspired from: https://en.cppreference.com/w/cpp/container/stack */

template <typename T>
class Stack
{  
    private:
        Vector<T> *myVector;

    public:
        // Constructors & Destructor
        Stack();
        Stack(const Stack<T> &stack);
        // Stack(int args, ...);
        ~Stack() {delete myVector;}

        // //Element acces
        T top() const {return myVector->back();}

        // //Capacity
        bool empty() const {return myVector->empty();}
        size_t size() const {return myVector->size();}
        
        // //Modifiers               
        void push(const T& data) {myVector->push_back(data);};
        void pop() {myVector->pop_back();}
        // void swap();
};

template <class T>
Stack<T>::Stack()
{
    Vector<T> *newVector = new Vector<T>();
    myVector = newVector;
}

template <class T>
Stack<T>::Stack(const Stack<T> &stack)
{
    Vector<T> *newVector = new Vector<T>(stack.size());
    // for(; !tempStack.empty(); tempStack.pop())
    //     // newVector->push_back(tempStack.top());
    //     std::cout << tempStack.top() << " ; " << stack.top() << std::endl;
    myVector = newVector;
}

#endif
