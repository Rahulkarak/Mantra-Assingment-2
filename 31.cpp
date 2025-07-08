#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number"<<endl;
    cin>>n;

    for(int i=0;i<6;i++){
        for(int j=0;j<4;j++){
            if(j==0 ||j==3||i==0|| i==5){
                cout<<n;
            }else{
                cout<<" ";
            }
        }
        cout<<endl;
    }
    return 0;
}