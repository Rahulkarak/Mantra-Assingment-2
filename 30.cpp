#include<iostream>
using namespace std;
int main(){
    int arr[4];
    cout<<"Enter the four number"<<endl;
    for(int i=0;i<4;i++){
        cin>>arr[i];
    }

    int sum=0;
    float avg=0;
    for(int i=0;i<4;i++){
        sum+=arr[i];
    }
    avg=sum/(float)4;

    cout<<"Entered number are->"<<endl;
    for(int i=0;i<4;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    cout<<"The total of four numbers is "<<sum<<endl;
    cout<<"The average of four number is "<<avg<<endl;

}