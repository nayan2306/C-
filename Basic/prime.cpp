#include<iostream>
using namespace std;
//prime or not
int main(){
    int n;
    cout<<"enter a number: ";
    cin>>n;
    int i=2;
    while (i<n){
        if (n%i==0){
            cout<<"not prime";
            break;
        }
        i++;
    }
    if (i==n){
        cout<<"prime";
    }
    return 0;
}