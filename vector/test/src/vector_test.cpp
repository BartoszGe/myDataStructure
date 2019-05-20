#include <gtest/gtest.h>

#include <cstdint>
#include "vector.h"

TEST(constructor, vector)
{
    Vector<int> firstVector;                                            // empty vector of ints
    Vector<int> secondVector (5);
    Vector<int> thirdVector (4,100);                                    // four ints with value 100
    // Vector<int> fourthVector (thirdVector.begin(),thirdVector.end());   // iterating through second
    Vector<int> sixthVector (thirdVector);                             // a copy of third

    EXPECT_EQ(100, thirdVector.begin());
    EXPECT_EQ(100, thirdVector.end());
    // EXPECT_EQ(100, fourthVector.begin());
    // EXPECT_EQ(100, fourthVector.end());
    EXPECT_EQ(100, sixthVector.begin());
    EXPECT_EQ(100, sixthVector.end());
    
//   // the iterator constructor can also be used to construct from arrays:
//   int myints[] = {16,2,77,29};
//   std::vector<int> fifth (myints, myints + sizeof(myints) / sizeof(int) );

//   std::cout << "The contents of fifth are:";
//   for (std::vector<int>::iterator it = fifth.begin(); it != fifth.end(); ++it)
//     std::cout << ' ' << *it;
//   std::cout << '\n';
}

// TEST(pushTest,vector)
// {
//     Vector myVector;
//     myVector.push(1);
//     EXPECT_EQ(1, myVector.size());
//     EXPECT_EQ(1, myVector.top());
    
//     myVector.push(2);
//     myVector.push(3);
//     myVector.push(4);
//     myVector.push(5);

//     EXPECT_EQ(5, myVector.size());
//     EXPECT_EQ(5, myVector.top());

//     myVector.push(6);

//     EXPECT_EQ(6, myVector.size());
//     EXPECT_EQ(6, myVector.top());
// }

// TEST(popTest, vector)
// {
//     Vector myVector;
//     myVector.push(1);
//     myVector.pop();
//     myVector.push(1);
//     myVector.push(2);
//     myVector.pop();

//     EXPECT_EQ(1, myVector.size());
//     EXPECT_EQ(1, myVector.top());
    
//     myVector.push(3);
//     myVector.push(4);
//     myVector.push(5);
    
//     myVector.pop();
//     myVector.pop();

//     EXPECT_EQ(2, myVector.size());
//     EXPECT_EQ(3, myVector.top());
// }

