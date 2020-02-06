#include "Sort.h"
#include <vector>
#include "gtest/gtest.h"

TEST(BubbleSortTest, showList) {
    std::vector<int> tmp1;
    tmp1.push_back(1);
    tmp1.push_back(2);
    tmp1.push_back(3);
    Sort tmp2(tmp1);
  EXPECT_TRUE("{1, 2, 3}" == tmp2.show_List().str());
}
TEST(BubbleSortTest, BubbleSort) {
    std::vector<int> tmp1;
    tmp1.push_back(5);
    tmp1.push_back(7);
    tmp1.push_back(3);
    tmp1.push_back(9);
    tmp1.push_back(8);
    tmp1.push_back(132);
    tmp1.push_back(1);
    tmp1.push_back(57);
    Sort tmp2(tmp1);
    tmp2.bubbleSort();
    EXPECT_TRUE("{1, 3, 5, 7, 8, 9, 57, 132}" == tmp2.show_List().str());
}
TEST(SelectionSortTest, SelectionSort) {
    std::vector<int> tmp1;
    tmp1.push_back(5);
    tmp1.push_back(7);
    tmp1.push_back(3);
    tmp1.push_back(9);
    tmp1.push_back(8);
    tmp1.push_back(132);
    tmp1.push_back(1);
    tmp1.push_back(57);
    Sort tmp2(tmp1);
    tmp2.selectionSort();
    EXPECT_TRUE("{1, 3, 5, 7, 8, 9, 57, 132}" == tmp2.show_List().str());
}