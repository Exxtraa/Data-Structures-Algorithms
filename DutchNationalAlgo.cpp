#include<bits.std++.h>
using namespace std;

//leetcode 75
arr[] = [02020120310]

int low=0,mid=0,high=n-1;
for(int i=0;i<n;i++){
    while(mid <= high){
        if(num[mid] == 0){
            swap(num[low],num[mid])
            low++;
            mid++;
        }
        else if(num[mid]==1){
            mid++;
        }
        else{
            high--;
        }
    }
}