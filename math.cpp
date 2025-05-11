# include<bits/stdc++.h>
using namespace std;
#include <cmath>

//     REVERSE AN INTEGER
// int reverse(){
//     int x = 1128;
//     int rev = 0;
//     while( x != 0){
//         int ld = x % 10;
//         rev = (rev * 10 ) + ld;
//         x /= 10;
//     };
//     cout << rev; }


//      COUNT DIGIT
// int countDigit(){
//     int x = 111111;
//     int count = 0;
//     while( x != 0){
//         count++;
//         x = x / 10;
//     };
//     cout << count; }

// PALINDROME LIKE IF WE REVERSED THE NUBMER IT'S SAME AS INPUT SO CHECK TRUE OR NOT
// int palindrome(){
//     int x = 1234567899;
//     int rev = 0;
//     int dup = x;
//     if(x < 0) cout << "false";
//     while( x != 0){
//         int ld = x % 10;
//         rev = (rev * 10) + ld;
//         x /= 10;
//     };
//     if( dup == rev) cout << "true";
//     else cout << "false"; }


// ARMSTRONG IN THIS 134 = IT WILL MULTIPY BY 134TO 3 CUBE TO EVERY SINGLE NUMBER ADN THE OUTPUT WOULD BE SAME AS INPUT
// int armstrong(){
//     int x = 1634;
//     int temp = x;
//     int r;
//     int sum = 0;
//     while( x > 0){
//         r = x % 10;
//         sum = sum+(r*r*r);
//         x = x/10;
//     };
//     if(temp == sum){
//         cout << "armstrong";
//     }else{
//         cout << "not an armstrong ";
//     };
// }

// ALL DIVISON  
// int divison(){
//     int x = 10; // oputput = 1 2 5 10 //
//     for(int i = 1; i <= x; i++){
//         if ( x % i == 0){
//             cout << i << " ";
//         };
//     };
// }

// ALL DIVISON WITH STL ADN SORTING
// int divisonAll(){
//     int x = 36;
//     vector<int> is;
//     for(int i = 1; i <= sqrt(x); i++){
//         if ( x % i == 0){
//             is.push_back(i);
//             if((x/i) != i){
//                 is.push_back(x/i);
//             }
//         };
//     };
//     sort(is.begin(),is.end());
//     for(auto it : is){
//         cout << it << " ";
//     }
// }



int main(){
    // reverse();
    // countDigit()
    // palindrome();
    // armstrong();
    // divison();
    // divisonAll();
    
}