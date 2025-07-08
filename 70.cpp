#include<iostream>
using namespace std;
int main(){
    string str;
    cin>>str;

    int size=str.size();
    string str2="";
    for(int i=0;i<size;i++){
        str2+=str[i]-'a'+'A';
    }

    cout<<str2;
    return 0;
}