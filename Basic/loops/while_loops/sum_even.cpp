#include<iostream>
using namespace std;

int main(){
    int i, sum=0;
    int n;
    cout<<"enter a number upto which you want sum: ";
    cin>>n;
    i=1;
    while (i<=n){
        if (i%2==0){
            sum= sum+i;
        }
        i++;
    }
    cout<<sum;
    return 0;
}