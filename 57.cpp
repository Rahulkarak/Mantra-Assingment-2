#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    float area,s;
    cout<<"Enter the side of hexagon"<<endl;
    cin>>s;

    area=(6 * (s * s)) / (4 * tan(3.14 / 6));


    cout<<"Area of hexagon is "<<area<<endl;
    return 0;
}