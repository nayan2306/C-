#include<iostream>
using namespace std;

int main(){
    int a,b;
    cout<<"Enter two numbers: ";
    cin>>a>>b;
    if(a>b){
        cout<<a<<" is greater than "<<b<<endl;
    }
    else if(a<b){
        cout<<a<<" is less than "<<b<<endl;
    }
    else{
        cout<<a<<" is equal to "<<b<<endl;
    }
    return 0;
}