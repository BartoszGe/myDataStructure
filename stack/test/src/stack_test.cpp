#include <gtest/gtest.h>

#include <cstdint>
#include "stack.h"
#include <stack>
// #include <deque>


TEST(constructor, list)
{   
    std::stack<int> firstStdStack;
    Stack<int> firstMyStack;
    EXPECT_EQ(firstStdStack.size(), firstMyStack.size());

    firstStdStack.push(5);
    firstMyStack.push(5);

    EXPECT_EQ(firstStdStack.size(), firstMyStack.size());
    EXPECT_EQ(firstStdStack.top(), firstMyStack.top());

    std::stack<int> secondStdStack(firstStdStack);
    Stack<int> secondMyStack(firstMyStack);

    // EXPECT_EQ(secondStdStack.size(), secondMyStack.size());
    // EXPECT_EQ(secondStdStack.top(), secondMyStack.top());

    // std::deque<int> stdDeque {3, 1, 4, 1, 5};
    // std::stack<int> thirdStdStack(deq);
    // Deque<int> myDeque {3, 1, 4, 1, 5};
    // Stack<int> thirdMyStack(myDeque);
    // EXPECT_EQ(thirdStdStack.size(), thirdMyStack.size());
    // EXPECT_EQ(thirdStdStack.top(), thirdMyStack.top());
    
}

// TEST(pushTest,list)
// {
//     Stack myList;
//     myList.push(1);
//     EXPECT_EQ(1, myList.size());
//     EXPECT_EQ(1, myList.top());
    
//     myList.push(2);
//     myList.push(3);
//     myList.push(4);
//     myList.push(5);

//     EXPECT_EQ(5, myList.size());
//     EXPECT_EQ(5, myList.top());

//     myList.push(6);

//     EXPECT_EQ(6, myList.size());
//     EXPECT_EQ(6, myList.top());
// }

// TEST(popTest, list)
// {
//     Stack myList;
//     myList.push(1);
//     myList.pop();
//     myList.push(1);
//     myList.push(2);
//     myList.pop();

//     EXPECT_EQ(1, myList.size());
//     EXPECT_EQ(1, myList.top());
    
//     myList.push(3);
//     myList.push(4);
//     myList.push(5);
    
//     myList.pop();
//     myList.pop();

//     EXPECT_EQ(2, myList.size());
//     EXPECT_EQ(3, myList.top());
// }

