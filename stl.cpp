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
// int defineVectors(){
//     vector <int> v;
//     v.push_back(5);

//     COMPLEX ITERATION
//     vector <int>::iterator it = v.begin();
//     it++;
//     cout << *(it) << " ";
//     it+ 2;
//     cout << *(it) << " ";

//     vector<int>::iterator it-- = v.end();  Cuz without -- it takes value out of the array so to be in array use --
//     vector<int>::iterator it = v.rend();   RARE USED
//     vector<int>::iterator it = v.rbegin(); RARW USED

//        TO SIMPLIFY THIS 
//     for(auto it = v.begin(); it !v = v.end(); i++ ){    
//         cout << *(it) << " "; }  
    
//     WE USE THIS FOR LOOP
//     for(auto it : v){
//         cout << *(it) << " "; }

//     //USING ERASE  && INSERT
//     vector<int> v = {1,6,7,99,7,5};
//     // v.erase(v.begin()+3);                 IT ERASES
//     // v.insert(v.begin()+3,1,69);           IT INSERTS
//     for(int val : v ){
//         cout << val << " "; }
//     cout << endl;
//     return 0; }

//   LIST
// int defineList(){
//     list<int> l = {1,4,8};
//     l.push_back(5);
//     for(int val : l)
//         cout << val << " "; }


// PRIORITY_QUEUE
// int definePriority(){
//     priority_queue<int> pq;
//     pq.push(6);
//     pq.push(9);
//     pq.push(3);
//     pq.emplace(44);
//     // pq.pop();
//     cout << pq.top() << "  ";
//     pq.push(100);
//     cout << pq.top();}


//   SET
// int defineSet(){
//     set<int> st;
//     st.insert(5);
//     st.insert(2);
//     st.emplace(2);
//     st.insert(1);
//     st.insert(3);
//     st.insert(4);

//     auto it = st.find(3);
//     if (it != st.end()) {
//         cout << *it << endl;  // prints 3
//     } else {
//         cout << "Not found" << endl;
//     }}


//   MAP
// int defineMap(){
//     map<string,int> m;

//     m["laptop"] = 100;
//     m["watch"] = 140;
//     // m["tv"] = 50;
//     m["monitors"] = 210;

//     for(auto p: m){
//         cout << p.first << " " << p.second << endl;
//     }

//     if(m.find("tv") != m.end()){
//         cout << "Found";
//     } else{
//         cout << "Not found";
//     };}

//MULTI MAP
// int defineMultiMap(){
//     multimap<string,int> m;

//     m.emplace("tv", 100);
//     m.emplace("tv", 100);
//     m.emplace("tv", 100);
//     m.emplace("tv", 100);

//     m.erase(m.find("tv"));

//     for(auto p: m){
//         cout << p.first << " " << p.second << endl;
//     };}


//SORTING
// int defineSorting(){
//     vector<pair<int,int>> vec = {{1,8},{6,8},{7,9}};

//     sort( vec.begin(), vec.end());

//     for(auto l : vec){
//         cout << l.first << " " << l.second << endl;  
//     };
// }

//SROTING IN PAIRS SECOND VALUE OUTPUT
bool comparitor(pair<int,int>p1 , pair<int,int>p2){
    if(p1.second < p2.second)return true;
    if(p1.second > p2.second) return false;
    
    if(p1.first < p2.first) return true;
    else return false;
};

int definePairSorting(){
    vector<pair<int,int>> v = { {9,1},{5,1},{4,3}};

    sort(v.begin(), v.end(),comparitor);

    for(auto l : v){
        cout << l.first << " " << l.second << endl;
    }

}


int main (){
    // definePair();
    // defineVectors();
    // defineList();
    // definePriority();
    // defineSet();
    // defineMap();
    // defineMultiMap();/
    // defineSorting();
    definePairSorting();
}




