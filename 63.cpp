#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    cout<<"enter the list size"<<endl;
    int n;
    cin>>n;
    int arr[n];
    cout<<"Enter the numbers"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    sort(arr,arr+n);
    reverse(arr,arr+n);

    cout<<"Numbers in decreasing order"<<endl;
    for(int i=0;i<3;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}