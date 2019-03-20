#include <gtest/gtest.h>

#include <cstdint>
#include "linkedlist.h"


TEST(constructor, list)
{
    LinkedList myList(3, 4, 0, 6);
    EXPECT_EQ(3, myList.back());
    EXPECT_EQ(6, myList.front());
}

TEST(push_backTest, list)
{
    LinkedList myList;
    myList.push_back(1);
    EXPECT_EQ(1, myList.size());
    EXPECT_EQ(1, myList.back());
    EXPECT_EQ(1, myList.front());
    
    myList.push_back(2);
    myList.push_back(3);
    myList.push_back(4);
    myList.push_back(5);

    EXPECT_EQ(5, myList.size());
    EXPECT_EQ(5, myList.back());
    EXPECT_EQ(1, myList.front());

    myList.push_back(6);

    EXPECT_EQ(6, myList.size());
    EXPECT_EQ(6, myList.back());
    EXPECT_EQ(1, myList.front());
}

TEST(pop_backTest, list)
{
    LinkedList myList;
    myList.push_back(1);
    myList.pop_back();
    myList.push_back(1);
    myList.push_back(2);
    myList.pop_back();

    EXPECT_EQ(1, myList.size());
    EXPECT_EQ(1, myList.back());
    EXPECT_EQ(1, myList.front());
    
    myList.push_back(3);
    myList.push_back(4);
    myList.push_back(5);
    
    myList.pop_back();
    myList.pop_back();

    EXPECT_EQ(2, myList.size());
    EXPECT_EQ(3, myList.back());
    EXPECT_EQ(1, myList.front());
}

TEST(push_frontTest, list)
{
    LinkedList myList;
    myList.push_front(1);
    myList.push_front(2);
    myList.push_front(3);
    myList.push_front(4);
    myList.push_front(5);

    EXPECT_EQ(5, myList.size());
    EXPECT_EQ(1, myList.back());
    EXPECT_EQ(5, myList.front());

    myList.push_front(6);

    EXPECT_EQ(6, myList.size());
    EXPECT_EQ(1, myList.back());
    EXPECT_EQ(6, myList.front());
}

TEST(pop_frontTest, list)
{
    LinkedList myList;

    myList.push_front(1);
    myList.pop_front();
    myList.push_front(1);
    myList.push_front(2);
    myList.pop_front();

    EXPECT_EQ(1, myList.size());
    EXPECT_EQ(1, myList.back());
    EXPECT_EQ(1, myList.front());
    
    myList.push_front(3);
    myList.push_front(4);
    myList.push_front(5);
    
    myList.pop_front();
    myList.pop_front();

    EXPECT_EQ(2, myList.size());
    EXPECT_EQ(1, myList.back());
    EXPECT_EQ(3, myList.front());
}

