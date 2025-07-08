#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the value of n"<<endl;
    cin>>n;
    int fact=1;
    for(int i=n;i>=2;i--){
        fact=fact*i;
    }

    cout<<"Factorial of number n is "<<fact<<endl;
    return 0;
}