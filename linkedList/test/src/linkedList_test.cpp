#include <gtest/gtest.h>

#include <cstdint>
#include "linkedlist.h"
#include <list>




TEST(emptyConstructor, list)
{
    LinkedList<int> myList;
    std::list<int> stdList;

    myList.push_back(5);
    stdList.push_back(5);
    myList.push_back(4);
    stdList.push_back(4);
    EXPECT_EQ(myList.back(), myList.back());
    EXPECT_EQ(myList.front(), myList.front());
}

TEST(constructor, list)
{
    LinkedList<int> firstmyList(3, 4, 0, 6);
    std::list<int> firststdList {3, 4, 0, 6};
    EXPECT_EQ(firststdList.back(), firstmyList.back());
    EXPECT_EQ(firststdList.front(), firstmyList.front());
    LinkedList<int> secondMyList (firstmyList);
    std::list<int> secondStdList (firststdList);
    EXPECT_EQ(secondStdList.back(), secondMyList.back());
    EXPECT_EQ(secondStdList.front(), secondMyList.front());
}

TEST(push_backTest, list)
{
    LinkedList<int> myList;
    std::list<int> stdList;

    for (size_t i=1; i<100; i++ ) {
        stdList.push_back( i );
        myList.push_back( i );
    }

    EXPECT_EQ(stdList.back(), myList.back());
    EXPECT_EQ(stdList.front(), myList.front());
    EXPECT_EQ(stdList.size(), myList.size());
}

TEST(pop_backTest, list)
{
    LinkedList<int> myList;
    std::list<int> stdList;

    for (size_t i=1; i<100; i++ ) {
        stdList.push_back( i );
        myList.push_back( i );
    }
    
    for (size_t i=1; i<100; i++ ) {
        stdList.pop_back();
        myList.pop_back();
    }

    for (size_t i=1; i<100; i++ ) {
        stdList.push_back( i );
        myList.push_back( i );
    }

    EXPECT_EQ(stdList.back(), myList.back());
    EXPECT_EQ(stdList.front(), myList.front());
    EXPECT_EQ(stdList.size(), myList.size());
}

TEST(push_frontTest, list) {
    LinkedList<int> myList;
    std::list<int> stdList;

    for (size_t i=1; i<100; i++ ) {
        stdList.push_front( i );
        myList.push_front( i );
    }

    EXPECT_EQ(stdList.back(), myList.back());
    EXPECT_EQ(stdList.front(), myList.front());
    EXPECT_EQ(stdList.size(), myList.size());
}

TEST(pop_frontTest, list)
{
    LinkedList<int> myList;
    std::list<int> stdList;

    for (size_t i=1; i<100; i++ ) {
        stdList.push_back( i );
        myList.push_back( i );
    }
    
    for (size_t i=1; i<100; i++ ) {
        stdList.pop_front();
        myList.pop_front();
    }

    for (size_t i=1; i<100; i++ ) {
        stdList.push_back( i );
        myList.push_back( i );
    }

    EXPECT_EQ(stdList.back(), myList.back());
    EXPECT_EQ(stdList.front(), myList.front());
    EXPECT_EQ(stdList.size(), myList.size());
}

