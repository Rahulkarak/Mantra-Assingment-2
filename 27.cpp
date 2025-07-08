#include<iostream>
using namespace std;
int main(){
    float arr[2]={0};
    cout<<"Enter temperature in celcuis"<<endl;
    cin>>arr[0];

    arr[1] = arr[0] + 273.15; 

    cout<<"Entered temperature in celcuis is "<<arr[0]<<endl;
    cout<<"Temperature in Kelvin is -> "<<arr[1]<<endl;
    return 0;
}