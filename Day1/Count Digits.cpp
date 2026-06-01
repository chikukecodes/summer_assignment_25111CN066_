#include<iostream>
using namespace std;
int main(){
    int n, digit=0; /* initialisation of variables n and digits */

    cout<<"Enter number: "; 
    cin>>n;
    if(n==0){
        digit=1;
    }
    while(n!=0){
        n=n/10;
        digit=digit+1;
    }
    cout<<"Digits = "<<digit<<endl;
    return 0;
}
