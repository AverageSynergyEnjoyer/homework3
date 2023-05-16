#include "inout.h"
#include <vector>
#include <iostream>
#include "read.cpp"
int print(std::vector<int>& vec)
{
	for (int g = 0; g < vec.size(); g++) {
		std::cout << *(vec.begin() + 1);
	};
}