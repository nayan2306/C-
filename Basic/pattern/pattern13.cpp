/*
A
B B
C C C
D D D D
*/
#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    int row=1;
    char ch='A';

    while(row<=n){
        int col =1;
        ch = 'A'+row-1;
        while(col<=row){
            cout<<ch<<" ";
            col++;
        }
        cout<<endl;
        row++;
    }
    return 0;
}