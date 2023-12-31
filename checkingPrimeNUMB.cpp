#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    for(int i=1;i<=n;i++){
        if(n%2==0){
            cout<<"Not-Prime"<<endl;
        }
        else{
            cout<<"Prime"<<endl;
            
        }
        break;
    }
}