#include<bits/stc++.h>
using namespace std;

//largest subarray sum 
// Like after minus still we got which is the biggest subarray;

long long sum =0,maxi = LONG_MIN;
for(int i=0;i<n;i++){
    sum += arr[i];
    if(sum < 0){
        sum = 0;
    }

    if(sum > maxi){
        maxi = sum;
    }
}
return maxi;