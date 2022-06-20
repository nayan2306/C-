#include<iostream>
using namespace std;

int main(){
    int i=0;
    int j=0;
    int n;
    cin>>n;
    //i for rows 
    // j for columns
    while (i<n){
        while (j<n){
            cout<<" * ";
            j++;
        }
        cout<<endl;
        j=0;
        i++;
    }
}