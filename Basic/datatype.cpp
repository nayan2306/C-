#include<iostream>
using namespace std;

int main(){
    int a =123;
    cout<<a<<endl;

    char ch ='b';
    cout<<ch<<endl;
    
    bool bl= true;
    cout<<bl<<endl;

    float f=1.23;
    cout<<f<<endl;

    double d=1.23;
    cout<<d<<endl;

    long l=123456789;
    cout<<l<<endl;

    unsigned int ui=-1234;
    cout<<ui<<endl;

    int size = sizeof(a);
    cout<<"Size of Integer : "<<size<<endl;

    int size1 = sizeof(ch);
    cout<<"Size of Charcter : "<<size1<<endl;

    int size2 = sizeof(bl);
    cout<<"Size of Boolean : "<<size2<<endl;

    int size3 = sizeof(f);
    cout<<"Size of Float : "<<size3<<endl;

    int size4 = sizeof(d);
    cout<<"Size of Double : "<<size4<<endl;

    int size5 = sizeof(l);
    cout<<"Size of Long integer : "<<size5<<endl;

    int size6 = sizeof(ui);
    cout<<"Size of Unsigned integer : "<<size6<<endl;

    return 0;
}
