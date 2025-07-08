#include<iostream>
using namespace std;
int main(){
    int arr[3]={0};
    cout<<"Enter the first number"<<endl;
    cin>>arr[0];

    cout<<"Enter the second number"<<endl;
    cin>>arr[1];

    arr[2]=arr[0]/arr[1];
    cout<<"The quotient of entered number is "<<arr[2]<<endl;
    return 0;
}