#include <gtest/gtest.h>
#include "algolib/sort.hpp"
using namespace std;

TEST(BubbleSort__Test, first_test){
    vector<int> vt{13,2,1,5};
    algo_sort::bubble_sort(vt);
    EXPECT_EQ(vt, (vector<int>{1,2,5,13}));
}
TEST(BubbleSort__Test, second_test){
    vector<double> vt{3.2,2.4,1.25,1.22,-1};
    algo_sort::bubble_sort(vt);
    EXPECT_EQ(vt, (vector<double>{-1,1.22,1.25,2.4,3.2}));
}

TEST(BubbleSort__Test, third_test){
    vector<int> vt{1,2,3,4};
    algo_sort::bubble_sort(vt);
    EXPECT_EQ(vt, (vector<int>{1,2,3,4}));
}