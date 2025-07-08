#include<iostream>
using namespace std;
int main(){
    float arr[4]={0};

    cout<<"Enter the width of rectangle"<<endl;
    cin>>arr[0];
    cout<<"Enter the height of rectangle"<<endl;
    cin>>arr[1];

    arr[2]=arr[0]*arr[1];
    arr[3]=2*(arr[0]+arr[1]);

    cout<<"Entered width of rectangle is "<<arr[0]<<endl;
    cout<<"Entered height of rectangle "<<arr[1]<<endl;

    cout<<"Area of rectangle is "<<arr[2]<<endl;
    cout<<"Perimeter of rectangle is "<<arr[3]<<endl;
    return 0;
}