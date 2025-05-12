#include<bits/stdc++.h>
using namespace std;

// 1. PRINT N NUMBER TIME AND NUMBER TILL N BOTH CAN BE DONE
// void print(int i ,int n){
//     if( i > n) return; // <
//     cout << i << endl;
//     print(i+1,n); // i- 1 do both these if want reverse
// }


// 2. FROM BACKTRAKING 5 4 3 2 1
// void printBack( int n){
//     if( n == 0)return;
//     cout << n << endl;
//     print(n-1);
// }


// 3. PARAMETERSIED WAY
// void fun(int i,int sum){
//     if( i < 1) {
//         cout << sum;
//         return;
//     }
//     fun( i-1,sum+i);
// }

// 4. FUNCTIONAL WAY           tc = O(n)  sc = O(n)
// int fun(int n){     
//     if( n == 0) return 0;
//     return n+fun(n-1);
// }


// 5. REVERSE AN ARRAY WITH RECCURSION
// void rev(int i,int arr[],int n){
//     if( i >= n/2) return;
//     swap(arr[i],arr[n-i-1]);
//     rev(i+1,arr,n);
// }

bool f(int i, string &s){
    if( i >= s.size() /2 )return true;
    if(s[i] != s[s.size()-i-1]) return false;
    return f(i+1,s);
}



int main(){

    string s = "MADSM";
    cout << f(0,s);






    // 1.
    // print(1,7);

    // 2.
    // int n =5;
    // printBack(n);

    // 3.
    // int n= 3;
    // cout << fun(n);

    // 5.
    // int n;
    // cin >> n;
    // int arr[n];
    // for(int i= 0;i<n;i++) cin >>  arr[i];
    // rev(0,arr,n);
    // for(int i=0;i<n;i++) cout << arr[i] << " ";
}