#include<iostream>
using namespace std;

int main() {
    int n;
    cin>>n;

    int i=2;
    while(i<n){
        if(i%2==0){
            cout<<" Not prime number"<<endl;
        }
    i+=1;
    }
    cout<<"Prime number"<<endl;
/*This code is wrong*/
}