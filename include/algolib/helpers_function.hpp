#include<iostream>
#include<vector>
#pragma once
using namespace std;


namespace helpers_functions{
    
    //is sorted array checks
    template<typename T>
    bool is_sorted(vector<T>& vc){
        for(size_t i=0;i<vc.size()-1;++i){
            if(vc[i]>vc[i+1]){
                return false;
            }
        }
        return true;
    }
    //end checking function
}