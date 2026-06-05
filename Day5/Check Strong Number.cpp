#include<iostream>
using namespace std;
int main(){
    int n, temp, digit, sum=0;
    cout<<"Enter number: ";
    cin>>n;
    temp=n;
    while(temp!=0){
        digit=temp%10;
        int fact=1;
        for(int i=1;i<=digit;i++) fact=fact*i;
        sum=sum+fact;
        temp=temp/10;
    }
    if(sum==n) cout<<"Strong Number"<<endl;
    else cout<<"Not Strong Number"<<endl;
    return 0;
}
