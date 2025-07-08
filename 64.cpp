#include<iostream>
using namespace std;
int main(){
    int a,b;
    cout<<"Enter the two integer"<<endl;
    cin>>a>>b;

    int sum=0;
    sum=a+b;
    int temp=sum;
    int n=0;
    while(sum>0){
        n++;
        sum/=10;
    }

    cout<<"Sum is "<<temp<<endl;
    cout<<"number of digit is "<<n<<endl;
    return 0;
}