/* pattern 
D
C D
B C D
A B C D
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
        //ch = 'A'+row-1;    //main logic 
        ch = 'A'+n-row;
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