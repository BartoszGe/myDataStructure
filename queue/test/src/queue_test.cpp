#include <gtest/gtest.h>

#include <cstdint>
#include "queue.h"
#include <queue>

#include <iostream>

TEST(constructor, list)
{   
    std::queue<int> firstStdQueue;
    Queue<int> firstMyQueue;

    firstStdQueue.push(5);
    firstMyQueue.push(5);
    firstStdQueue.push(4);
    firstMyQueue.push(4);

    EXPECT_EQ(firstStdQueue.size(), firstMyQueue.size());
    EXPECT_EQ(firstStdQueue.front(), firstMyQueue.front());
    EXPECT_EQ(firstStdQueue.back(), firstMyQueue.back());

    std::queue<int> secondStdQueue(firstStdQueue);
    Queue<int> secondMyQueue(firstMyQueue);

    EXPECT_EQ(firstStdQueue.size(), firstMyQueue.size());
    EXPECT_EQ(firstStdQueue.front(), firstMyQueue.front());
    EXPECT_EQ(firstStdQueue.back(), firstMyQueue.back());

    // std::deque<int> stdDeque {3, 1, 4, 1, 5};
    // std::queue<int> thirdStdQueue(deq);
    // Deque<int> myDeque {3, 1, 4, 1, 5};
    // Queue<int> thirdMyQueue(myDeque);
    // EXPECT_EQ(thirdStdQueue.size(), thirdMyQueue.size());
    // EXPECT_EQ(thirdStdQueue.top(), thirdMyQueue.top());
    
}

TEST(pushTest,queue)
{
    std::queue<int> firstStdQueue;
    Queue<int> firstMyQueue;
    for (size_t i=1; i<100; i++ ) {
        firstStdQueue.push( i );
        firstMyQueue.push( i );
    }

    EXPECT_EQ(firstStdQueue.size(), firstMyQueue.size());
    EXPECT_EQ(firstStdQueue.front(), firstMyQueue.front());
    EXPECT_EQ(firstStdQueue.back(), firstMyQueue.back());
}

TEST(popTest, queue)
{
    std::queue<int> firstStdQueue;
    Queue<int> firstMyQueue;
    for (size_t i=1; i<100; i++ ) {
        firstStdQueue.push( i );
        firstMyQueue.push( i );
    }

    EXPECT_EQ(firstStdQueue.size(), firstMyQueue.size());
    EXPECT_EQ(firstStdQueue.front(), firstMyQueue.front());
    EXPECT_EQ(firstStdQueue.back(), firstMyQueue.back());

       for (size_t i=1; i<99; i++ ) {
        firstStdQueue.pop();
        firstMyQueue.pop();
    }

    EXPECT_EQ(firstStdQueue.size(), firstMyQueue.size());
    EXPECT_EQ(firstStdQueue.front(), firstMyQueue.front());
    EXPECT_EQ(firstStdQueue.back(), firstMyQueue.back());
}

