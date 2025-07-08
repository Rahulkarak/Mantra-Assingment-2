#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[7];

    cout<<"Enter the number"<<endl;
    for(int i=0;i<7;i++){
        cin>>arr[i];
    }
    sort(arr,arr+7);

    for(int i=6;i>=0;i--){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}