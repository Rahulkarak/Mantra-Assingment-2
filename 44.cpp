#include<iostream>
using namespace std;
int main(){
    float r;
    cout<<"Enter the radius of shpre"<<endl;
    cin>>r;

    float vol;
    vol=(4 * 3.14 * r * r * r) / 3;

    cout<<"Caluting volume of sphere "<<endl;

    cout <<"entered raduis of sphere is "<<r<<endl;
    cout<<"Volume of sphere is "<<vol<<endl;

    return 0;
}