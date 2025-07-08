#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    float arr[4]={0};
    cout<<"Enter the first side of traingle "<<endl;
    cin>>arr[0];
    cout<<"Enter the second side of triangle "<<endl;
    cin>>arr[1];
    cout<<"Enter the angle between the side "<<endl;
    cin>>arr[2];

    float area;
    arr[3] = (arr[0] * arr[1] * sin((3.14 / 180) * arr[2])) / 2;

    cout<<"Entered first side of traingle is -> "<<arr[0]<<endl;;
    cout<<"Entered second side of triangle is -> "<<arr[1]<<endl;
    cout<<"Angle between these two side of triangle is -> "<<arr[2]<<endl;

    cout<<"Area of traingle is "<<arr[3]<<endl;
    return 0;
}