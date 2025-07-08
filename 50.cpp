#include<iostream>
using namespace std;
int main(){
    cout<<"Enter the length in cm"<<endl;
    float cm;
    cin>>cm;
    cout<<"Distance in meter is "<<cm/(float)100<<endl;
    cout<<"Distance in km is "<<cm/(float)100000<<endl;
    return 0;
}