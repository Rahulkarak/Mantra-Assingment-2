#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    float area,s,n;
    cout<<"Enter the number of side of polygon"<<endl;
    cin>>n;
    cout<<"Enter the side of hexagon"<<endl;
    cin>>s;

    area = (n * (s * s)) / (4.0 * tan((3.14 / n)));


    cout<<"Area of hexagon is "<<area<<endl;
    return 0;
}