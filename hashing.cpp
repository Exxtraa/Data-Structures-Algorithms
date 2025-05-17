#include <bits/stdc++.h>
using namespace std;


// 1. how many time number occures
// int f(int num,int arr[],int size){  //(int num,vector<int>)
//     int count = 0;
//     for(int i=0; i< size;i++){
//         if(arr[i] == num){
//             count += 1;
//         }
//     }
//     cout << num << "  comes  " << count << "  times" << endl;
// }


// 2. INSERTED ALL OF THE VALUE IN HASH AND THEN CHECK THE REPETAION OF NUMBER VALUES
// int n;
//     cin >>n;
//     int arr[n];
//     for(int i=0;i<n;i++){
//         cin >> arr[i];
//     }

//     int hash[13] = {0};
//     for(int i=0;i<n;i++){
//         hash[arr[i]] += 1;
//     }

//     int q;
//     cin >> q;
//     while(q--){
//         int number;
//         cin >> number;
//         cout << hash[number];
//     }

// 3. CHARACTER REPETAION IN STRING
//    string s;
//     cin >> s;

//     int hash[256] = {0};
//     for(int i=0;i<s.size();i++){
//         hash[s[i]]++;
//     }

//     int q;
//     cin >> q;
//     while(q--){
//         char num;
//         cin >> num;
//         cout << hash[num] << endl;
//     }


// 4. FINDING CHAR IN STRINGS AND RETURN IT BY THE HELP OF MAP
//    int n;
//    cin >> n;
//    int arr[n];
//    for(int i=0;i<n;i++){
//     cin >> arr[i];
//    }

//    map<int,int> mpp;
//    for(int i=0;i<n;i++){
//     mpp[arr[i]]++;
//    }                                         
                
                                // for(auto it : mpp){
                                //cout << it.first << " " << it.second << endl;  //THIS IS TO ITERATE MAP
                                // }

//    int q;
//    cin >> q;
//    while(q--){
//     int number;
//     cin >> number;
//     cout << mpp[number];
//    }



int main(){
 
    string s;
    cin >> s;

    map<char,int> mpp;
    for(int i=0;i<s.size();i++){
        mpp[s[i]]++;
    }

    int q;
    cin >> q;
    while(q--){
        char num;
        cin >> num;
        cout << mpp[num] << endl;
    }


    // // 1.
    // int num = 6;
    // int arr[18] = {1,2,6,8,4,6,9,7,6,6,1,6,9,6,6,4,6,5}; // vector<int> arr = {1,2,6,8,4,5,9,7,2,3,1,5,9,8,7,4,12,5} another method
    // f(num,arr,18);
}