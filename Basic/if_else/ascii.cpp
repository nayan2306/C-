#include<iostream>
using namespace std;

int main(){
    char ch;
    cout<<"Enter a character: ";
    ch=cin.get();
    if(ch>='a' && ch<='z'){
        cout<<ch<<" is a lower case letter"<<endl;
    }
    else if(ch>='A' && ch<='Z'){
        cout<<ch<<" is an upper case letter"<<endl;
    }
    else if (ch>='0'&& ch>=9){
        cout<<ch<<" is a digit"<<endl;
    }
    return 0;
}