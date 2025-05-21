// find largest in array

#include<bits/stdc++.h>
using namespace std;

int largestElement(vector<int> &arr, int n){
    int largest = arr[0];
    for(int i=0;i<n;i++){
        if(arr[i] > largest){
            largest = arr[i]
        }
    }
    return largest;
}


int secondlargest(vector<int>&a,int n){
    int largest = a[0];
    int slargest = -1;
    for(int i=0;i<n;i++){
        if(a[i] > largest){
            slargest = largest;
            largest =a[i];
        } else if(a[i] < largest && a[i] > slargest){
            slargest =a[i];
        }
    }
    return slargest;
}

// saecond smallest in array and second largest both impo ques
int secondSmallest(vector<int>&a,int n){
    int smallest = a[0];
    int sSmallest = INT_MAX;
    for(int i = 1;i<n;i++){
        if(a[i] < smallest){
            sSmallest = smallest;
            smallest = a[i];
        } else if(a[i] > smallest && a[i] < sSmallest){
            sSmallest =a[i];
        }
    }
    return sSmallest;
}

vector<int> getSecondOrderElements(int n, vector<int> a) {
    int slargest = secondlargest(a,n);
    int sSmallest = secondSmallest(a,n);
    return{slargest,sSmallest};
}


// Is array sorted or not
int sorted(int n,vector<int>&a){
    for(int i =0;i<n;i++){
        if(arr[i] >= arr[i-1]){

        }else{
            return false;
        }
    }
    return true;
}