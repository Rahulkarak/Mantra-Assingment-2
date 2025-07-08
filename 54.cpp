#include<iostream>
using namespace std;
int main(){
    float p,r,t,si;
    cout<<"Enter principle,rate of interest,time"<<endl;
    cin>>p>>r>>t;

    si=(p*r*t)/(float)100;
    cout<<"Simple interest is "<<si<<endl;
}