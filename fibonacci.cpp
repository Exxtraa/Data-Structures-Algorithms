#include<bits/stdc++.h>
using namespace std;

/// Time Complacity is 2(n);

int fib(int n){
    if(n <= 1) return n;
    int first = fib(n-1);
    int second = fib(n-2);
    return first + second;
}

int main(){
    int n = 3;
    cout << fib(n);
}