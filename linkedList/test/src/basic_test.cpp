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
    LinkedList stdList;
    stdList.push_back(1);
    stdList.push_back(2);
    stdList.push_back(3);
    stdList.push_back(4);
    stdList.push_back(5);

    EXPECT_EQ(5, stdList.size());
    EXPECT_EQ(5, stdList.back());
    EXPECT_EQ(1, stdList.front());

    stdList.push_back(6);

    EXPECT_EQ(6, stdList.size());
    EXPECT_EQ(6, stdList.back());
    EXPECT_EQ(1, stdList.front());
}

