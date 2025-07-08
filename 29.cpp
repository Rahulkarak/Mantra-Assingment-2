#include<iostream>
using namespace std;
int main(){
    float arr[4]={0};

    cout<<"Enter the dividend "<<endl;
    cin>>arr[0];
    cout<<"Enter the divisor "<<endl;
    cin>>arr[1];

    arr[2]=arr[0]/arr[1];
    arr[3]=(int)arr[0]%(int)arr[1];

    cout<<"Entered dividende is"<<arr[0]<<endl;
    cout<<"Entered divisor is "<<arr[1]<<endl;

    cout<<"The quotient of the division is ->"<<(int)arr[2]<<endl;
    cout<<"The remainder of the division is -> "<<arr[3]<<endl;


    return 0;
}