# include<bits/stdc++.h>
using namespace std;

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


int palindrome(){
    int x = 22;
    int dup = x;
    int rev =0;
    while( x != 0){
        int ld = x % 10;
        rev = (rev *10 )+ ld;
        x /=10;
    };
    bool check = dup == rev ;
    if (check){
        cout << "palindrome true";
    } else{
        cout << "palindrome false";
    };

}

int main(){
    // reverse();
    // countDigit()
    palindrome();
}