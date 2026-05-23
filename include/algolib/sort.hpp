#include<vector>
#pragma once
using namespace std;

namespace sorting_algorithms{
    //bubble sort O(n^2)
    template<typename T>
    void bubble_sort(vector<T>&vc){
        for(int i=0;i<vc.size()-1;++i){
            for(int j=i+1;j<vc.size();++j){
                if(vc[j]<vc[i]){
                    swap(vc[j],vc[i]);
                }
            }
        }
    }
    //end bubble sort

    //selection sort O(n^2)
    template<typename T>
    void selection_sort(vector<T>&vc){
        for(int i=0;i<vc.size()-1;++i){
            int index_of_min_value = i;
            for(int j=i+1;j<vc.size();++j){
                if(vc[index_of_min_value]>vc[j]){
                    index_of_min_value = j;
                }
            }
            swap(vc[i],vc[index_of_min_value]);
        }
    }
    //end selection sort
}