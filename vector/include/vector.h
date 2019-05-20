#ifndef VECTOR_H
#define VECTOR_H

#include <cstddef>
#include <stdarg.h>
#include <iterator.h>

/* Inspired from: https://en.cppreference.com/w/cpp/container/vector */

template <class T>
class Vector
{  
    private:
    
    public:
        Vector();
        Vector(unsigned int size);
        Vector(unsigned int size, const T &initial);
        Vector(T & back, T & end);
        Vector(Vector<T> & vector);
        ~Vector();
};

#endif
