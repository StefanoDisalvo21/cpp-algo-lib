#include <gtest/gtest.h>
#include "algolib/genericalgos.hpp"
using namespace std;


TEST(Kadanes_Test,FirstTest){
    vector<int> vt{-2,1,-3,4,-1,2,1,-5,4};
    auto x=gen_algos::max_sub(vt);
    EXPECT_EQ(x,6);
}
TEST(Kadanes_Test,SecondTest){
    vector<int> vt{21};
    auto x=gen_algos::max_sub(vt);
    EXPECT_EQ(x,21);
}
TEST(Kadanes_Test,ThirdTest){
    vector<int> vt{-1,2,4,-3,5,2,-5,2};
    auto x=gen_algos::max_sub(vt);
    EXPECT_EQ(x,10);
}
