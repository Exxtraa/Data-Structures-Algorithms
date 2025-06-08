#include <bits.c++.h>
using namespace std;

//This is leetcode 169 Majority 
// in this  u have to tell the largetst number occurence 


int count =0;
int el;
for(int i=0;i<n;i++){
    if(count == 0){
        count = i;
        el = num[i];
    }
    else if(num[i] = el){
        count++;
    }
    else{
        coutn--;
    }
    int count1 = 0;
    for(int i=0;i<n;i++){
        for(num[i] == el) count1++; 
        if(count1 > n / 2){
            return el;
        }
        else return -1;
    }

}