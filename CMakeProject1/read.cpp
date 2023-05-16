#include <vector>
#include <iostream>
int read(std::vector<int>& vec)
{
	std::vector<int> vec = {};
	int insert;
	int count;
	vec.resize(count);
	std::cin >> count;
	for (int i = 0; i < count; i++)
	{
		std::cin >> insert;
		vec.push_back(insert);
	};
}