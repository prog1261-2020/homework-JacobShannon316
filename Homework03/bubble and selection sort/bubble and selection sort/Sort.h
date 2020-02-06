#pragma once
#include <vector>
#include <string>
#include <sstream>
#include "gtest/gtest.h"
class Sort
{
public:
	Sort(std::vector<int> list) : list(list) {}
	void fill_Random_List(int size, int max_Number);
	void bubbleSort();
	void selectionSort();
	std::stringstream show_List();

private:
	std::vector<int> list;
};

