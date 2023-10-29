#include<iostream>
using namespace std;

int main() {

    int marks;
    cout<<"Please enter your marks"<<endl;
    cin>>marks;

    if(marks>=80){
        cout<<"A grade"<<endl;
    }
    else if( marks>60){
        cout<<"B grade"<<endl;
     }
     else if(marks>35){
       cout<<"C grade"<<endl;
     }

     else{
        cout<<"Fail"<<endl;
     }

    return 0;
}
