#include<iostream>
using namespace std;
int main(){
    float rad;
    cout<<"enter the raduis of circle"<<endl;
    cin>>rad;
    float area,per;
    area=3.14*rad*rad;
    per=2*3.14*rad;
    cout<<"Entered raduis of circle is "<<rad<<endl;

    cout<<"Area of circlr is "<<area<<endl;
    cout<<"Perimter of cirle is "<<per<<endl;
    return 0;
}