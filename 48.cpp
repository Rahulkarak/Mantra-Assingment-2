#include<iostream>
using namespace std;
int main(){
    int a,b;
    cout<<"Enter the first number "<<endl;
    cin>>a;
    cout<<"Enter the second number "<<endl;
    cin>>b;

    a=a+b;
    b=a-b;
    a=a-b;
    cout<<"After swapping first number is "<<a<<endl;
    cout<<"after swapping second number is "<<b<<endl;
    return 0;
}