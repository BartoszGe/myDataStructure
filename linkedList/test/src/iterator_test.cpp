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

    Iterator iterator;
    iterator = createNode(1);
    EXPECT_EQ(*iterator.begin(), 1);

    iterator = createNode(2);
    EXPECT_EQ(*iterator.begin(), 2);
}


TEST(endTest, iterator)
{
    Iterator iterator;
    iterator = createNode(1);
    EXPECT_EQ(*iterator.end(), 1);

    iterator = createNode(2);
    EXPECT_EQ(*iterator.end(), 2);
}

TEST(operatorTest, iterator)
{
    Node *head = createNode(1);
    Iterator iterator;
    iterator = head;
    EXPECT_EQ(*iterator.begin(), 1);

    Node *newNode = createNode(2);
    head->next = newNode;
    ++iterator;
    EXPECT_EQ(*iterator.begin(), 2);

}
