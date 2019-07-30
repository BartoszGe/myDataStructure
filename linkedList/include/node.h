#ifndef NODE_H
#define NODE_H

template <class T>
struct Node
{
    T data;
    struct Node *next;
};

#endif

