#include <iostream>
#include "iterator.h"

Iterator Iterator::end()
{
	std::cout << "test of iterator" << iterator->data<< "\n" ;
	testData = 10;
	return *this;
}

