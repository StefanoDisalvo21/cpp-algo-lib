#include<vector>
#include "helpers_function.hpp"
#pragma once

namespace searching_algorithms{
    
    //Binary Search O(logn) --> Returns -1 if the input is not found
    template<typename T>
    size_t binary_search(vector<T>&vc, const T& target){
        //check if the vector is sorted
        if(helpers_functions::is_sorted(vc)==false){
            throw invalid_argument("The Input Vector Is Not Sorted");
        }
        size_t start = 0;
        size_t end = vc.size()-1;
        while(start<=end){
            size_t middle = start+(end-start)/2;
            if(vc[middle]==target){
                return middle;
            }
            else if(vc[middle]<target){
                start = middle+1;
            }
            else{
                end = middle-1;
            }
        }
        return -1;
    }
    //End Binary Search
}