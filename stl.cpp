#include <bits/stdc++.h>
using namespace std;

//Algorithm
//containers                          Deatiled STL is this 
//Fuctions
//Iterators



// 1. PAIR
// int definePair(){
//     pair<int,int> p = {2,8};
//     cout << p.second;

//     pair<int ,int> p[] = {{2,4},{56,8},{6,9}};
//     cout << p[1].first;
// }



// 2.  VECTOR
int defineVectors(){
    vector <int> v;
    v.push_back(5);

    vector <int>::iterator it = v.begin();
    
    it++;
    cout << *(it) << " ";

    it+ 2;
    cout << *(it) << " ";

    // vector<int>::iterator it-- = v.end();  Cuz without -- it takes value out of the array so to be in array use --
    vector<int>::iterator it = v.rend();
    vector<int>::iterator it = v.rbegin();
}


int main (){
    // definePair();
    defineVectors();
}




