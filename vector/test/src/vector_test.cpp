#include <gtest/gtest.h>

#include <cstdint>
#include "vector.h"
#include <string>

TEST(constructorInt, vector)
{
    Vector<int> firstVector;                                            // empty vector of ints
    Vector<int> secondVector (5);
    Vector<int> thirdVector (4,100);                                    // four ints with value 100
    Vector<int> fourthVector (4,thirdVector);
    // Vector<int> fourthVector (thirdVector.front(),thirdVector.back());   // iterating through second
    Vector<int> sixthVector (thirdVector);                             // a copy of third

    EXPECT_EQ(100, thirdVector.front());
    EXPECT_EQ(100, thirdVector.back());
    EXPECT_EQ(100, fourthVector.front());
    EXPECT_EQ(100, fourthVector.back());
    EXPECT_EQ(100, sixthVector.front());
    EXPECT_EQ(100, sixthVector.back());
    
  // the iterator constructor can also be used to construct from arrays:
    int myints[] = {16,2,77,29};
    int idx = 0;
    Vector<int> seventhVector (myints, myints + sizeof(myints) / sizeof(int) );
    // for (std::vector<int>::iterator it = seventhVector.begin(); it != seventhVector.end(); ++it)
    //     EXPECT_EQ(myints[idx++], *it);
}

TEST(constructorChar, vector)
{
    Vector<char> firstVector;                                            // empty vector of ints
    Vector<char> secondVector ('c');
    Vector<char> thirdVector (4,'a');                                    // four ints with value 100
    Vector<char> fourthVector (4,thirdVector);
    // Vector<char> fourthVector (thirdVector.front(),thirdVector.back());   // iterating through second
    Vector<char> sixthVector (thirdVector);                             // a copy of third

    EXPECT_EQ('a', thirdVector.front());
    EXPECT_EQ('a', thirdVector.back());
    EXPECT_EQ('a', fourthVector.front());
    EXPECT_EQ('a', fourthVector.back());
    EXPECT_EQ('a', sixthVector.front());
    EXPECT_EQ('a', sixthVector.back());
    
  // the iterator constructor can also be used to construct from arrays:
    char myints[] = {'a','b','c','d'};
    int idx = 0;
    std::vector<char> seventhVector (myints, myints + sizeof(myints) / sizeof(int) );
    // for (std::vector<char>::iterator it = seventhVector.begin(); it != seventhVector.end(); ++it)
    //     EXPECT_EQ(myints[idx++], *it);
}

TEST(reserve, vector)
{
    std::vector<int> stdVector;
    Vector<int> myVector;  

    for (int i=1;i<10;i++) {
        stdVector.push_back(i);
        myVector.push_back(i);
    }

    for (int idx=0;idx<stdVector.size(); idx++)
        EXPECT_EQ(stdVector[idx], myVector[idx]);

    EXPECT_EQ(stdVector.capacity(), myVector.capacity());
    EXPECT_EQ(stdVector.size(), myVector.size());

    stdVector.reserve(12);
    myVector.reserve(12);

    for (int idx=0;idx<stdVector.size(); idx++)
        EXPECT_EQ(stdVector[idx], myVector[idx]);

    EXPECT_EQ(stdVector.capacity(), myVector.capacity());
    EXPECT_EQ(stdVector.size(), myVector.size());

    for (int i=1;i<120;i++) {
        stdVector.push_back(i);
        myVector.push_back(i);
    }
    for (int idx=0;idx<stdVector.size(); idx++)
        EXPECT_EQ(stdVector[idx], myVector[idx]);

    EXPECT_EQ(stdVector.capacity(), myVector.capacity());
    EXPECT_EQ(stdVector.size(), myVector.size());

}

TEST(resize, vector)
{
    std::vector<int> stdVector;
    Vector<int> myVector;  

    for (int i=1;i<10;i++) {
        stdVector.push_back(i);
        myVector.push_back(i);
    }
        stdVector.resize(5);
        myVector.resize(5);

        for (int idx=0;idx<myVector.size(); idx++)
            EXPECT_EQ(stdVector[idx], myVector[idx]);
        
        stdVector.resize(8,100);
        myVector.resize(8,100);

        for (int idx=0;idx<stdVector.size(); idx++)
            EXPECT_EQ(stdVector[idx], myVector[idx]);

        stdVector.resize(12);
        myVector.resize(12);

        for (int idx=0;idx<stdVector.size(); idx++)
            EXPECT_EQ(stdVector[idx], myVector[idx]);
}
