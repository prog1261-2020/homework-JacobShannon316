#include "Sort.h"
#include <vector>
#include "gtest/gtest.h"
#include <sstream>

void Sort::fill_Random_List(int size, int max_Number)
{
	for (int i{ 1 }; i < max_Number; ++i)
	{
		list.push_back(rand() % size + 1);
	}
}

void Sort::bubbleSort()
{
	int tmp;
	int tmp2;
	bool sorted;
	do
	{
		sorted = true;
		for (int i{0}; i < list.size() - 1; ++i)
		{
			if (list[i] > list[i + 1])
			{
				int tmp = list[i];
				list[i] = list[i + 1];
				list[i + 1] = tmp;
				sorted = false;
				++i;
			}
		}
	} while (sorted != true);
}

void Sort::selectionSort()
{
	int tmp;
	int tmp2 = 0;
	for (int i{ 0 }; i < list.size(); ++i)
	{

		for (int i{ tmp2 }; i < list.size() - 1; ++i)
		{
			if (list[tmp2] == list[i])
			{
				tmp = list[i];
			}
			else if (list[i] < tmp)
			{
				std::swap(list[tmp2], list[i]);
			}
		}
		++tmp2;
	}
	if (list[tmp2-1] < list[tmp2 - 2])
	{
		std::swap(list[tmp2-1], list[tmp2 - 2]);
	}
}

std::stringstream Sort::show_List()
{
	std::stringstream tmp;
	tmp << "{";
	for (int i{ 0 }; i < list.size() - 1; ++i)
	{
		tmp << list[i] << ", ";
	}
	tmp << list.back() << "}";
	return tmp;
}
