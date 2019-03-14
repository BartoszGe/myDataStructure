#include <gtest/gtest.h>

#include <cstdint>
#include "linkedlist.h"

//TEST(BasicTest, comparisons)
//{
    //uint32_t num = 42;

    //EXPECT_EQ(42U, num);
    //EXPECT_TRUE(num == 42U);
    //EXPECT_FALSE(num == 0);
    //EXPECT_GT(num, 41U);
    //EXPECT_GE(num, 42U);
    //EXPECT_LT(num, 43U);
    //EXPECT_LE(num, 42U);
//}

TEST(push_backTest, list)
{
    LinkedList myList;
    myList.push_back(1);
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

