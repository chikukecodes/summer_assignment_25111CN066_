#include<iostream>
using namespace std;
int rev=0, base=1;
void reverseNum(int n){
    if(n==0) return;
    rev=rev + (n%10)*base;
    base=base*10;
    reverseNum(n/10);
}
int main(){
    int n;
    cout<<"Enter number: ";
    cin>>n;
    reverseNum(n);
    cout<<"Reversed = "<<rev<<endl;
    return 0;
}
