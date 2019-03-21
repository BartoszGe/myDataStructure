#include <gtest/gtest.h>

#include <cstdint>
#include "iterator.h"
#include "node.h"

Node * createNode(int data)
{
    Node *newNode = new Node;
    newNode->data = data;
    newNode->next = nullptr;
    return newNode;
}

TEST(beginTest, iterator)
{
    Node *newNode = createNode(1);
    Iterator iterator;
    iterator = newNode;
    EXPECT_EQ(*iterator.begin(), 1);
    delete newNode;
    
}


TEST(endTest, iterator)
{
    Node *newNode = createNode(32452353);
    Iterator iterator;
    iterator = newNode;
    EXPECT_EQ(*iterator.end(), 32452353);
    delete newNode;
}

