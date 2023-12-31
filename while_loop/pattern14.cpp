/*
ABCDE
ABCDE
ABCDE
ABCDE
ABCDE
Pattern Printing*/
#include<iostream>
using namespace std;

int main() {

    int n;
    cin>>n;

    int i = 1;
    while(i<=n){
        int j=1;
        while(j<=n){
            char ans='A'+j-1;
            cout<<ans;
            j=j+1;
        }
        cout<<endl;
        i=i+1;
    }
  
}