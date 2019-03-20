#include <gtest/gtest.h>

#include <cstdint>
#include "stack.h"


TEST(constructor, list)
{
    Stack myList(3, 4, 0, 6);
    EXPECT_EQ(6, myList.top());
}

TEST(pushTest,list)
{
    Stack myList;
    myList.push(1);
    EXPECT_EQ(1, myList.size());
    EXPECT_EQ(1, myList.top());
    
    myList.push(2);
    myList.push(3);
    myList.push(4);
    myList.push(5);

    EXPECT_EQ(5, myList.size());
    EXPECT_EQ(5, myList.top());

    myList.push(6);

    EXPECT_EQ(6, myList.size());
    EXPECT_EQ(6, myList.top());
}

TEST(popTest, list)
{
    Stack myList;
    myList.push(1);
    myList.pop();
    myList.push(1);
    myList.push(2);
    myList.pop();

    EXPECT_EQ(1, myList.size());
    EXPECT_EQ(1, myList.top());
    
    myList.push(3);
    myList.push(4);
    myList.push(5);
    
    myList.pop();
    myList.pop();

    EXPECT_EQ(2, myList.size());
    EXPECT_EQ(3, myList.top());
}

