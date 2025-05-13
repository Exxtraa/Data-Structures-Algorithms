#include<bits/stdc++.h>
using namespace std;


// 6.1 VALID PALENDROME WITH STRING CHECK REMOVED SPECAIL CASE LEETCODE QUESTION 125
    // Helper function to clean the string
    string clean(string s) {
        string result = "";
        for (char c : s) {
            if (isalnum(c)) {
                result += tolower(c);
            }
        }
        return result;
    }

    // Recursive helper to check palindrome
    bool checkPalindrome(int i, string& s) {
        if (i >= s.size() / 2) return true;
        if (s[i] != s[s.size() - i - 1]) return false;
        return checkPalindrome(i + 1, s);
    }

    // Main function
    bool isPalindrome(string s) {
        string re = clean(s);
        return checkPalindrome(0, re);
}


//6.2 VALID PALENDROME WITH STRING CHECK REMOVED SPECAIL CASE
bool f(int i, string &re){
    if( i >= re.size() /2 )return true;
    if(re[i] != re[re.size()-i-1]) return false;
    return f(i+1,re);
}

string cl(string s){
    string result = "";
    for(char c : s){
        if( isalnum(c)){
            result += tolower(c);
        };
    }
    return result; 
}


int main(){
    
    6.1,6.2
    string s = "A man, a plan, a canal: Panama";
    string re = cl(s);
    // cout << re;
    cout << f(0,re);
}