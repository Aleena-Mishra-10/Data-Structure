#include<iostream>
using namespace std;

bool isEven(int n){
    
    if(n^1==n+1){
        return true;
    }
    else{
        return false;
    }
}
int main(){
       
    int n;
    cout<<"enter a number:";
    cin>>n;
    isEven(n)? cout<<"Even":cout<<"Odd";
    return 0;
}