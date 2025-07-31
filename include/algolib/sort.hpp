#include<vector>
#pragma once
using namespace std;

namespace algo_sort{
    //Bubble Sort O(n^2)
    template<typename T>
    void bubble_sort(vector<T>&vc){
        for(size_t i=0;i<vc.size();++i){
            for(size_t j=0;j<vc.size()-i-1;++j){
                auto x=vc[0];
                if(vc[j]>vc[j+1]){
                    x=vc[j];
                    vc[j]=vc[j+1];
                    vc[j+1]=x;
                }
            }
        }
    }//end bubble sort 

}