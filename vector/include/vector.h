#ifndef VECTOR_H
#define VECTOR_H

#include <cstddef>
#include <stdarg.h>

/* Inspired from: https://en.cppreference.com/w/cpp/container/vector */

template <typename T>
class Vector
{  
    private:
        size_t mySize;
        size_t myCapacity;
        T * buffer;
    public:
        Vector();
        Vector(unsigned int size);
        Vector(unsigned int size, T data);
        // Vector(unsigned int size, const T &referenceVector);
        // Vector(const T & back, const T & end);
        Vector(const Vector<T> & vector);
        ~Vector();

        // Iterators
        T begin() {return buffer[0];}
        T end() {return buffer[mySize -1];}

        // Capacity
        size_t size() const {return mySize;}
        size_t capacity() const  {return myCapacity;}
        bool empty() const {return mySize > 0 ?true :false;}
};

    template <class T>
    Vector<T>::Vector()
    {
        mySize = 0;
        myCapacity = 0;
        buffer = nullptr;
    }

    template <class T>
    Vector<T>::Vector(unsigned int size)
    {
        mySize = size;
        myCapacity = size;
        buffer = new T[size];
    }

    template <class T>
    Vector<T>::Vector(unsigned int size, const T data)
    {
        mySize = size;
        myCapacity = size;
        buffer = new T[size];
        for(unsigned int idx = 0; idx < size; ++idx)
            buffer[idx] = data;
    }

    // template <class T>
    // Vector<T>::Vector(unsigned int size, const T &referenceVector)
    // {
    //     mySize = size;
    //     myCapacity = size;
    //     buffer = new T[size];
    //     for(unsigned int idx = 0; idx < size; ++idx)
    //         buffer[idx] = referenceVector.buffer[idx];
    // }

    // template <class T>
    // Vector<T>::Vector(const T & back, const T & end)
    // {

    // }

    template <class T>
    Vector<T>::Vector(const Vector<T> & vector)
    {
        mySize = vector.size();
        myCapacity = vector.capacity();
        buffer = new T[mySize];
        for(unsigned int idx = 0; idx < mySize; ++idx)
            buffer[idx] = vector.buffer[idx];
    }

    template <class T>
    Vector<T>::~Vector()
    {
        // if(!empty())
            delete []buffer;
    }

#endif
