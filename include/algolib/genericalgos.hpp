#include<vector>
#include<cmath>
#pragma once
using namespace std;

namespace gen_algos{
    //kadane's algorithm O(n)
    template<typename T>
    T max_sub(vector<T>&vc){
        auto best=vc[0], sum=0;
        for(size_t i=0;i<vc.size();i++){
            sum=max(vc[i], sum+vc[i]);
            best=max(best,sum);
        }
        return best;
    }//end kadane's algorithm
}