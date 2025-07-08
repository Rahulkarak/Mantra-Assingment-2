#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    float side;
    cout<<"Enter the side of equilateral traingle"<<endl;
    cin>>side;
    float area;

    area=(sqrt(3)*side*side)/4;
    cout<<"Area of traingle is "<<area<<endl;
    return 0;
}