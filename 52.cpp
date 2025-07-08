#include<iostream>
using namespace std;
int main(){
    int a1,a2,a3;
    cout<<"Enter the first and second angle of traingle"<<endl;
    cin>>a1>>a2;

    a3=180-(a1+a2);
    cout<<"Entered first angle of traingle is "<<a1<<endl;
    cout<<"Entered second angle of traingle is "<<a2<<endl;
    cout<<"Third angle of traingle is "<<a3<<endl;
    return 0;
}