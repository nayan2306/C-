/*pattern 
1 2 3 4 
1 2 3 4
1 2 3 4
1 2 3 4
*/
#include<iostream>
using namespace std;

int main(){
    int i=1;
    int j=1;
    int n;
    cin>>n;
    //i for rows
    //j for columns
    while(i<=n){
        j=1;
        while(j<=n){
            cout<<" "<<n-j+1;
            j++;
        }
    cout<<endl;
    j=1;
    i++;
    }
    
    return 0;

}