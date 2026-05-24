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

    //quicksort
    template<typename T>
    int partitioning(vector<T>& vc, int start, int end){
        int pivot = v[end];
        int i= start-1;
        for(int j=0;j<end;++j){
            if(vc[j]<=pivot){
                ++i;
                swap(vc[i],vc[j]);
            }
        }

        return (++i);
    }//end partitioning function

    template<typename T>
    void quicksort(vector<T>& vc, int start, int end){
        if(start<end){
            int partition = partitioning(vc,start,end);

            quicksort(vc,start,part-1);
            quicksort(vc,part+1,end);
        }
    }

    //end quicksort
}