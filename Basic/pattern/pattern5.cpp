/* pattern required 
1
2 2
3 3 3
4 4 4 4
5 5 5 5 5
*/
#include<iostream>
using namespace std;

int main(){
    int row=1;
    int n;
    cin>>n;
    while(row<=n){
        int col=1;
        while(col<=row){
            cout<<row<<" ";
            col++;
        }
        cout<<endl;
        row++;
    }
    return 0;
}
