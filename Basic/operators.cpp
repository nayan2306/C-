#include<iostream>
using namespace std;

int main(){
    //arthmetic operator
    // +, -, *, /, %, ++, --
    int a = 10;
    int b = 20;
    int c = a+b;
    cout<<c<<endl;
    c = a-b;
    cout<<c<<endl;
    c = a*b;
    cout<<c<<endl;
    c = a/b;
    cout<<c<<endl;
    c = a%b;
    cout<<c<<endl;
    c = a++;
    cout<<c<<endl;
    c = ++a;
    cout<<c<<endl;
    c = a--;
    cout<<c<<endl;
    c = --a;
    cout<<c<<endl;
    //Relational operator
    // >, <, >=, <=, ==, !=
    int d = 10;
    int e = 20;
    bool f = d>e;
    cout<<f<<endl;
    f = d<e;
    cout<<f<<endl;
    f = d>=e;
    cout<<f<<endl;
    f = d<=e;
    cout<<f<<endl;
    f = d==e;
    cout<<f<<endl;
    f = d!=e;
    cout<<f<<endl;
    //Logical operator
    // &&, ||, !
    bool g = true;
    bool h = false;
    bool i = g&&h;
    cout<<i<<endl;
    i = g||h;
    cout<<i<<endl;
    i = !g;
    cout<<i<<endl;
    //Assignment operator
    // =, +=, -=, *=, /=, %=
    int j = 10;
    int k = 20;
    j = k;  
    cout<<j<<endl;
    j += k;
    cout<<j<<endl;
    j -= k;
    cout<<j<<endl;
    j *= k;
    cout<<j<<endl;
    j /= k;
    cout<<j<<endl;
    j %= k;
    cout<<j<<endl;
    //Bitwise operator
    // &, |, ^, ~, <<, >>
    int l = 10;
    int m = 20;
    int n = l&m;
    cout<<n<<endl;
    n = l|m;
    cout<<n<<endl;
    n = l^m;
    cout<<n<<endl;
    n = ~l;
    cout<<n<<endl;
    n = l<<2;
    cout<<n<<endl;
    n = l>>2;
    cout<<n<<endl;
    //Ternary operator
    // ?:
    int o = 10;
    int p = 20;
    int q = o>p?o:p;
    cout<<q<<endl;
    return 0;
}