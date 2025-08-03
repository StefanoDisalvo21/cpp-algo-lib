#include <gtest/gtest.h>
#include "algolib/sort.hpp"
using namespace std;

TEST(Merge_Test, first_test){
    vector<int> vt{13,2,1,5};
    algo_sort::merge_sort(vt,0,vt.size()-1);
    EXPECT_EQ(vt, (vector<int>{1,2,5,13}));
}
TEST(Merge_Test, second_test){
    vector<double> vt{3.2,2.4,1.25,1.22,-1};
    algo_sort::merge_sort(vt,0,vt.size()-1);
    EXPECT_EQ(vt, (vector<double>{-1,1.22,1.25,2.4,3.2}));
}

TEST(Merge_Test, third_test){
    vector<int> vt{1,2,3,4};
    algo_sort::merge_sort(vt,0,vt.size()-1);
    EXPECT_EQ(vt, (vector<int>{1,2,3,4}));
}
TEST(Merge_Test, fourth_test){
    vector<int> vt{10,9,8,7,6,5,4,3,2,1};
    algo_sort::merge_sort(vt,0,vt.size()-1);
    EXPECT_EQ(vt, (vector<int>{1,2,3,4,5,6,7,8,9,10}));
}
