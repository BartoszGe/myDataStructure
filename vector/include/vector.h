#ifndef VECTOR_H
#define VECTOR_H

/* Inspired from: https://en.cppreference.com/w/cpp/container/vector */

template <typename T>
class Vector
{  
    private:
        size_t mySize;
        size_t myCapacity;
        T *buffer;

    public:
        //Constructors
        Vector();
        Vector(size_t size);
        Vector(size_t size,const T data);
        Vector(size_t size, const Vector<T> &referenceVector);
        Vector(T *begin, T *end);
        Vector(const Vector<T> & vector);

        //Destructor
        ~Vector();

        // Iterators
        T begin() {return buffer[0];}
        T end() {return buffer[mySize -1];}

        // Capacity
        size_t size() const {return mySize;}
        size_t resize();
        size_t capacity() const  {return myCapacity;}
        bool empty() const {return mySize > 0 ?false :true;}
        void resize (size_t size, const T& data = 0);
        void reserve (size_t size);

        // Modifiers
        void push_back (const T& data);

        T &operator[](size_t idx) {return buffer[idx];}
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
    Vector<T>::Vector(size_t size, const Vector<T> &referenceVector)
    {
        mySize = size;
        myCapacity = size;
        buffer = new T[size];
        for(size_t idx = 0; idx < size; ++idx)
            buffer[idx] = referenceVector.buffer[idx];
    }

    template <class T>
    Vector<T>::Vector(T *begin, T *end)
    {
        mySize = 0;

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
        buffer = newBuffer;
    }

    template <class T>
    void Vector<T>::push_back (const T& data)
    {
        
    }

#endif
