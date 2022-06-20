/* pattern 
A B C
B C D 
C  ,D E 
*/

#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int row =1;
    char ch = 'A';
    while(row<=n){
        int col =1;
//main logic 
        ch = 'A'+row-1;
        while(col<=n){
            cout<<ch<<" ";
            ch =ch+1;
            col++;
        }
        cout<<endl;
        row++;
    }
    return 0;
}