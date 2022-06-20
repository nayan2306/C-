#include<iostream>
using namespace std;

int main(){
    int i=1,sum=0;
    int n;
    cout<<"enter a number upto which you want sum: ";
    cin>>n;
    while (i<=n){
        if (i%2!=0){
            sum = sum+i;
        }
        i++;
    }
    cout<<sum;
    return 0;
}