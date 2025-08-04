#include<iostream>
#include<vector>
using namespace std;


namespace helpers{
    //checking if vector is sorted
    template<typename T>
    bool is_sorted(vector<T>&vc){
        for(size_t i=0;i<vc.size()-1;++i){
            if(vc[i]>vc[i+1]){
                return false;
            }
        }
        return true;
    }
    //end checking if vector is sorted
}