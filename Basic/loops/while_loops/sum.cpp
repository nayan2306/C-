#include<iostream>
using namespace std;
int main(){
    int i=1,sum=0;
    int n=0;
    cout<<"enter a number upto which you want sum: ";
    cin>>n;
    while (i<=n){
        sum= sum+i;
        i++;
    }
    cout<<sum;
    return 0;
}