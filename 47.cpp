#include<iostream>
using namespace std;
int main(){
    cout<<"Enter the size of array"<<endl;
    int n;
    cin>>n;
    int *arr=new int [n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int sum_even=0;
    int sum_odd=0;
    for(int i=0;i<n;i++ ){
        if(arr[i]&1){
            sum_odd+=arr[i];
        }else{
            sum_even+=arr[i];
        }
    }

    cout<<"Sum of even number is "<<sum_even<<endl;
    cout<<"Sum of odd number is "<<sum_odd<<endl;
    return 0;
}