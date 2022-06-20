#include<iostream>
using namespace std;

int main(){
    float f, c;
    cout<<"Enter a temperature in Fahrenheit: ";
    cin>>f;
    c=(f-32)*5/9;
    cout<<"The temperature in Celcius is: "<<c;
    return 0;

}