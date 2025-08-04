#include<vector>
#pragma once
#include "sort.hpp"
#include "helper_functions.hpp"
using namespace std;


namespace algo_search{
    //binary search
    template<typename T>
    int binary_search(vector<T>&vc,const T &target){
        if(helpers::is_sorted(vc)==false){
            throw invalid_argument("The Given Output is not sorted, please sort");
        }
        else{
            int a=0, b=vc.size()-1;
            while(a<=b){
                int k=(a+b)/2;
                if(vc[k]==target){
                    return k;
                }
                else if(vc[k]>target){
                    b=k-1;
                }
                else{
                    a=k+1;
                }
            }
        }
        return -1;
    }
    //end binary search
}