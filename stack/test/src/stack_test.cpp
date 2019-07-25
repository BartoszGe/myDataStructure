#include <gtest/gtest.h>

#include <cstdint>
#include "stack.h"
#include <stack>
// #include <deque>

#include <iostream>

TEST(constructor, list)
{   
    std::stack<int> firstStdStack;
    Stack<int> firstMyStack;
    EXPECT_EQ(firstStdStack.size(), firstMyStack.size());

    firstStdStack.push(5);
    firstStdStack.push(4);
    firstMyStack.push(5);
    firstMyStack.push(4);

    EXPECT_EQ(firstStdStack.size(), firstMyStack.size());
    EXPECT_EQ(firstStdStack.top(), firstMyStack.top());

    std::stack<int> secondStdStack(firstStdStack);
    Stack<int> secondMyStack(firstMyStack);

    EXPECT_EQ(secondStdStack.size(), secondMyStack.size());
    EXPECT_EQ(secondStdStack.top(), secondMyStack.top());

    // std::deque<int> stdDeque {3, 1, 4, 1, 5};
    // std::stack<int> thirdStdStack(deq);
    // Deque<int> myDeque {3, 1, 4, 1, 5};
    // Stack<int> thirdMyStack(myDeque);
    // EXPECT_EQ(thirdStdStack.size(), thirdMyStack.size());
    // EXPECT_EQ(thirdStdStack.top(), thirdMyStack.top());
    
}

TEST(pushTest,stack)
{
    Stack<int> myStack;
    myStack.push(1);
    EXPECT_EQ(1, myStack.size());
    EXPECT_EQ(1, myStack.top());
    
    myStack.push(2);
    myStack.push(3);
    myStack.push(4);
    myStack.push(5);

    EXPECT_EQ(5, myStack.size());
    EXPECT_EQ(5, myStack.top());

    myStack.push(6);

    EXPECT_EQ(6, myStack.size());
    EXPECT_EQ(6, myStack.top());
}

TEST(popTest, stack)
{
    Stack<int> myStack;
    myStack.push(1);
    myStack.push(2);
    myStack.push(3);
    myStack.pop();

    EXPECT_EQ(2, myStack.size());
    EXPECT_EQ(2, myStack.top());
    
    myStack.push(3);
    myStack.push(4);
    myStack.push(5);
    
    myStack.pop();
    myStack.pop();

    EXPECT_EQ(3, myStack.size());
    EXPECT_EQ(3, myStack.top());
}

