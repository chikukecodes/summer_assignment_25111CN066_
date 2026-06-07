#include<iostream>
using namespace std;
int main(){
  
    int n,decimal=0, base=1, digit;
    cout<<"Enter binary number: ";
    cin>>n;
    while(n>0){
        digit=n%10;
        decimal=decimal+digit*base;
        base=base*2;
        n=n/10;
    }
    cout<<"Decimal = "<<decimal<<endl;
    return 0;
}
