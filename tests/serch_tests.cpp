#include<gtest/gtest.h>
#include "algolib/search.hpp"
using namespace std;


TEST(BS_Test,first_test){
    vector<int> vc = {1,2,3,4,5,6,7,8,9};
    EXPECT_EQ(searching_algorithms::binary_search(vc,5),4);
}
TEST(BS_Test,second_test){
    vector<int> vc = {1,2,3,4};
    EXPECT_EQ(searching_algorithms::binary_search(vc,5),-1);
}
TEST(BS_Test,this_thread){
    vector<int> vc = {1,9,2,3,5,6};
    EXPECT_THROW(searching_algorithms::binary_search(vc,9),invalid_argument);
}