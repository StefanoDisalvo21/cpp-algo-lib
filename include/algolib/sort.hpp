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

    //merge-sort
    template<typename T>
    void merge(vector<T>& vc, int left, int mid, int right){
        //giving dimension for sub arrays
        int first_half=mid-left+1;
        int second_half=right-mid;
        vector<T> left_half(first_half), right_half(second_half);

        //dividing into sub arrays
        for(size_t i=0;i<first_half;++i){
            left_half[i]=vc[left+i];
        }
        for(size_t i=0;i<second_half;++i){
            right_half[i]=vc[mid+1+i];
        }

        int j=0,x=0,k=left;
        //merging vectors
        while(j<first_half&&x<second_half){
            if(left_half[j]<=right_half[x]){
                vc[k]=left_half[j];
                ++j;
            }
            else{
                vc[k]=right_half[x];
                ++x;
            }
            ++k;
        }

        //copyng lasts elements
        while(j<first_half){
            vc[k]=left_half[j];
            ++j;
            ++k;
        }
        while(x<second_half){
            vc[k]=right_half[x];
            ++k;
            ++x;
        }
    }

    template<typename T>
    void merge_sort(vector<T>& vc, int left, int right){
        if(left<right){
            int mid = left + (right - left) / 2;

            merge_sort(vc, left, mid);
            merge_sort(vc,mid+1,right);

            merge(vc,left,mid,right);
        }
    }
    //end merge-sort
}
