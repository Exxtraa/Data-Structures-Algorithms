#include <bits/stdc++.h>
using namespace std;

void pattern2(int n){
    for(int i=0; i<6; i++){
        for(int j=0; j<=i; j++){
            cout << "* ";
        }
        cout << endl;
    }
}
void pattern3(int n){
    for(int i=1; i<6; i++){
        for(int j=1; j<=i; j++){
            cout <<  "* ";
        }
        cout << endl;
    }
}
void pattern4(int n){
    for(int i=1; i<6; i++){
        for(int j=1; j<=i; j++){
            cout << i << " ";
        }
        cout << endl;
    }
}
void pattern5(int n){
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n-i+1; j++){
            cout << "*";
        }
        cout << endl;
    }
}
void pattern6(int n){
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n-i+1; j++){
            cout << j << " ";
        }
        cout << endl;
    }
}
void pattern7(int n){
    for(int i=0; i<n; i++){

        //space
        for(int j=0; j<n-i-1; j++){
            cout << " ";
        }

        //starr
        for(int j = 0 ; j<2*i+1; j++){
            cout << "*";
        }

        //space
        for(int j=0; j<n-i-1; j++){
        cout << " ";
        }

        cout << endl;
    }
}
void pattern8(int n){
    for(int i=0; i<n; i++){

        //space
        for(int j=0; j<i; j++){
            cout << " ";
        }

        //starr
        for(int j = 0 ; j<2*n-(2*i + 1); j++){
            cout << "*";
        }

        //space
        for(int j=0; j<i; j++){
        cout << " ";
        }

        cout << endl;
    }
}
void pattern9(int n){
    for(int i=1; i<=2*n-1; i++){
        int star = i;
        if(i > n) star = 2*n-i;
        for(int j=1; j<=star; j++){
            cout << "* ";
        }
        cout << endl;
    }
}
void pattern10(int n){
    int starts = 1;
    for(int i=0; i<=n; i++){
        if (i % 2 ==0 ) starts = 1;
        else starts = 0;
        for(int j=0; j<=i; j++){
            cout << starts;
            starts = 1 - starts;
        }
        cout << endl;
    }
    
}
void pattern11(int n){
    int space = 2* (n-1);
    for(int i=0; i<=n; i++){
        //numbers
        for(int j=1; j<=i;j++){
            cout << j;
        }

        //space
        for(int j= 1 ;j <space; j++){
            cout << " ";
        }

        //number
        for(int j= i; j>=1; j--){
            cout << j;
        }

        cout << endl;
        space -= 2;
    }
}
void pattern12(int n){
    int num = 1;
    for(int i=1; i<=n; i++){
        for (int j=1; j<=i; j++){
            cout << num << " ";
            num = num+1;
        }
    cout << endl;
    }
}
void pattern13(int n){
    for(int i=0; i<=n; i++){
        for(char ch = 'A'; ch<= 'A' + i; ch++){
            cout << ch << " ";
        }
        cout << endl;
    }
}
void pattern14(int n){
    for(int i=0; i<=n; i++){
        for(char ch = 'A'; ch<= 'A' + (n - i - 1); ch++){
            cout << ch << " ";
        }
        cout << endl;
    }
}
void pattern15(int n){
    for(int i=0; i<n;i++){
        char ch = 'A' +i ;
        for(int j =0; j<=i;j++){
            cout << ch << " ";
        }
        cout << endl;
    }
}


int main(){
    int n = 5;
    pattern15(n);
}