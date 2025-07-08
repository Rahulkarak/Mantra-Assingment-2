#include<iostream>
using namespace std;
int main(){
    int num[0];
    cout<<"Enter the number"<<endl;
    cin>>num[0];

    if(num[0]==0){
        cout<<"Entered number is zero"<<endl;
    }else if(num[0]>0){
        cout<<"Entered number is positive"<<endl;
    }else{
        cout<<"Entered number is negative"<<endl;
    }
    return 0;
}