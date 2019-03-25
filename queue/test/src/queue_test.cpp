#include <gtest/gtest.h>

#include <cstdint>
#include "queue.h"


TEST(constructor, queue)
{
    Queue myQueue(3, 4, 0, 6); 
    EXPECT_EQ(3, myQueue.front());
}

TEST(pushTest,queue)
{
    Queue myQueue;
    myQueue.push(1);
    EXPECT_EQ(1, myQueue.size());
    EXPECT_EQ(1, myQueue.front());
    EXPECT_EQ(1, myQueue.back());
    
    myQueue.push(2);
    myQueue.push(3);
    myQueue.push(4);
    myQueue.push(5);

    EXPECT_EQ(5, myQueue.size());
    EXPECT_EQ(1, myQueue.front());
    EXPECT_EQ(5, myQueue.back());
}

TEST(popTest, queue)
{
    Queue myQueue;
    myQueue.push(1);
    myQueue.pop();
    myQueue.push(1);
    myQueue.push(2);
    myQueue.pop();

    EXPECT_EQ(1, myQueue.size());
    EXPECT_EQ(2, myQueue.front());
    EXPECT_EQ(2, myQueue.back());
    
    myQueue.push(3);
    myQueue.push(4);
    myQueue.push(5);
    
    myQueue.pop();
    myQueue.pop();

    EXPECT_EQ(2, myQueue.size());
    EXPECT_EQ(4, myQueue.front());
    EXPECT_EQ(5, myQueue.back());
}
