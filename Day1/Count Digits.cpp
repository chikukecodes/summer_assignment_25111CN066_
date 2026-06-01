#include<iostream>
using namespace std;
int main(){
    int n, count=0;
    cout<<"Enter number: ";
    cin>>n;
    if(n==0){
        count=1;
    }
    while(n!=0){
        n=n/10;
        count=count+1;
    }
    cout<<"Digits = "<<count<<endl;
    return 0;
}
