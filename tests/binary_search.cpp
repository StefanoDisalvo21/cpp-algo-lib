#include <gtest/gtest.h>
#include "algolib/search.hpp"
using namespace std;


TEST(BS_Test,first_test){
    vector<int> vt{1,2,3,4,5,6,7,8,9,10};
    int x=algo_search::binary_search(vt,7);
    EXPECT_EQ(x,6);
}
TEST(BS_Test,second_test){
    vector<int> vt{1,2,3,4,5,6,8,9,10};
    int x=algo_search::binary_search(vt,7);
    EXPECT_TRUE(x == 6 || x == -1);

}
TEST(BS_Test,third_test){
    vector<int> vt{3,2,5,1};
    EXPECT_THROW(algo_search::binary_search(vt,2),invalid_argument);

}