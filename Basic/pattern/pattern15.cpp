/* pattern 
A
B C
C D E 
D E F G
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
        //ch = 'A'+row-1;
        ch = 'A'+row-col;
        while(col<=row){
            cout<<ch<<" ";
            ch =ch+1;
            col++;
        }
        cout<<endl;
        row++;
    }
    return 0;
}