#include<bits.std++.h>
using namespace std;

//leetcode 75
arr[] = [02020120310]

int low = 0,mid=0,high=n-1;
for(int i=0;i<n;i++){
    while(mid <= high){
        if(num[i] ==0){
            swap(num[low],num[high]);
            low++;
            high++
        }
        else if(num[i] =1){
            mid++
        }
        else{
            swap[num[mid],num[high]];
            high--;
        }
    }
}