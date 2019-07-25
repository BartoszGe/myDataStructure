#ifndef VECTOR_H
#define VECTOR_H

/* Inspired: https://en.cppreference.com/w/cpp/container/vector */

template <typename T>
class Vector
{  
    private:
        size_t mySize = 0;
        size_t myCapacity = 0;
        T *buffer = nullptr;

    public:
        //Constructors & Destructor
        Vector();
        Vector(size_t size);
        Vector(size_t size,const T data);
        Vector(size_t size, const Vector<T> &vector);
        Vector(T *begin, T *end);
        Vector(const Vector<T> & vector);
        ~Vector();

        // Iterators
        // T begin() {return buffer[0];}
        // T end() {return buffer[mySize -1];}

        // Capacity
        size_t size() const {return mySize;}
        size_t resize();
        size_t capacity() const {return myCapacity;}
        bool empty() const {return mySize == 0 ?true :false;}
        void resize (size_t size, const T& data = 0);
        void reserve (size_t size);

        // Element access
        T &operator[](size_t idx) {return buffer[idx];}
        T front() const {return buffer[0];}
        T back() const {return buffer[mySize -1];}

        // Modifiers
        void push_back (const T& data);
        void pop_back ();

};

template <class T>
Vector<T>::Vector()
{
    mySize = 0;
    myCapacity = 0;
    buffer = nullptr;
}

template <class T>
Vector<T>::Vector(size_t size)
{
    mySize = size;
    myCapacity = size;
    buffer = new T[size];
}

template <class T>
Vector<T>::Vector(size_t size, const T data)
{
    mySize = size;
    myCapacity = size;
    buffer = new T[size];
    for(size_t idx = 0; idx < size; ++idx)
        buffer[idx] = data;
}

template <class T>
Vector<T>::Vector(size_t size, const Vector<T> &vector)
{
    mySize = size;
    myCapacity = size;
    buffer = new T[size];
    for(size_t idx = 0; idx < size; ++idx)
        buffer[idx] = vector.buffer[idx];
}

template <class T>
Vector<T>::Vector(T *begin, T *end)
{
    for(T* pointer = begin; pointer != end; ++pointer)
        push_back(*pointer);
}

template <class T>
Vector<T>::Vector(const Vector<T> & vector)
{
    mySize = vector.size();
    myCapacity = vector.capacity();
    buffer = new T[mySize];
    for(size_t idx = 0; idx < mySize; ++idx)
        buffer[idx] = vector.buffer[idx];
}

template <class T>
Vector<T>::~Vector()
{
    if(!empty())
        delete []buffer;
}

template <class T>
void Vector<T>::resize(size_t size, const T& data) 
{
    if(size > mySize)
        for(size_t idx = mySize; idx < size; ++idx)
            buffer[idx] = data;
    mySize = size;
}

template <class T>
void Vector<T>::reserve(size_t capacity) 
{
    if(myCapacity >= capacity)
        return;

    T *newBuffer = new T[capacity];
    for(int idx = 0; idx < mySize; ++idx)
        newBuffer[idx] = buffer[idx];
    
    delete []buffer;
    myCapacity = capacity;
    if(mySize > myCapacity) 
        mySize = myCapacity;
    buffer = newBuffer;
}

size_t findClosestMultipleOfTwo(size_t value)
{
    if(value < 1) return 1;
    size_t multipleOfTwo = 2;
    for(; multipleOfTwo<=value; multipleOfTwo *= 2);
    return multipleOfTwo;
}

template <class T>
void Vector<T>::push_back(const T& data)
{
    if(mySize == myCapacity)
        reserve(findClosestMultipleOfTwo(myCapacity));
    buffer[mySize++] = data;
}

template <class T>
void Vector<T>::pop_back()
{
    mySize--;
    if(mySize==0)
        delete []buffer;
}

#endif
