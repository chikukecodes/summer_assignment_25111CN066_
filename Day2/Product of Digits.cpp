#include<iostream>
using namespace std;
int main(){
    int n, product=1, digit;
    cout<<"Enter number: ";
    cin>>n;
    while(n!=0){
        digit=n%10;
        product=product*digit;
        n=n/10;
    }
    cout<<"Product of digits = "<<product<<endl;
    return 0;
}
