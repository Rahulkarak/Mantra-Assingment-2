#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the value of n"<<endl;
    cin>>n;

    int sum=0;
    for(int i=1;i<=n;i++){
        sum+=i;
    }

    cout<<"Sum is "<<sum<<endl;
    return 0;
}