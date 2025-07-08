#include<iostream>
using namespace std;
int main(){
    float r,h;
    cout<<"enter the raduis and height of cylinder"<<endl;
    cin>>r>>h;

    float vol;
    vol=3.14*r*r*h;

    cout<<"Entered raduis of cylinder is "<<r<<endl;
    cout<<"Entered height of cylinder is "<<h<<endl;

    cout<<"Volume of cylinder is "<<vol<<endl;
    return 0;
}