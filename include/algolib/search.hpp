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
            throw invalid_argument("The given input is not sorted");
        }
        else{
            int v_start=0, v_end=vc.size()-1;
            while(v_start<=v_end){
                int v_mid=(v_start+v_end)/2;
                if(vc[v_mid]==target){
                    return v_mid;
                }
                else if(vc[v_mid]>target){
                    v_end=v_mid-1;
                }
                else{
                    v_start=v_mid+1;
                }
            }
        }
        return -1;
    }
    //end binary search
}