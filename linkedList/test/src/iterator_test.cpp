#include <gtest/gtest.h>

#include <cstdint>
#include "iterator.h"
#include "node.h"

template <class T>
Node<T> * createNode(T data)
{
    Node<T> *newNode = new Node<T>;
    newNode->data = data;
    newNode->next = nullptr;
    return newNode;
}

TEST(beginTest, iterator)
{
    Node<int> *newNode = createNode(1);
    Iterator<int> iterator;
    iterator = newNode;
    EXPECT_EQ(*iterator.begin(), 1);
    delete newNode;
    
}


TEST(endTest, iterator)
{
    Node<int> *newNode = createNode(32452353);
    Iterator<int> iterator;
    iterator = newNode;
    EXPECT_EQ(*iterator.end(), 32452353);
    delete newNode;
}

