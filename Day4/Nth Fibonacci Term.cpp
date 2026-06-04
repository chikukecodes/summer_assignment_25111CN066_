#include<iostream>
using namespace std;
int main(){
    int n, a=0, b=1, c;
    cout<<"Enter N: ";
    cin>>n;
    if(n==1){ cout<<a<<endl; return 0; }
    if(n==2){ cout<<b<<endl; return 0; }
    for(int i=3;i<=n;i++){
        c=a+b;
        a=b;
        b=c;
    }
    cout<<"Nth term = "<<b<<endl;
    return 0;
}
