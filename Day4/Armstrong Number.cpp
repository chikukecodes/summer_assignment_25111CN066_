#include<iostream>
using namespace std;
int main(){
    int n, original, sum=0, digit, digits=0, temp;
    cout<<"Enter number: ";
    cin>>n;
    original=n;
    temp=n;
    while(temp!=0){ digits++; temp=temp/10; }
    temp=n;
    while(temp!=0){
        digit=temp%10;
        int power=1;
        for(int i=0;i<digits;i++) power=power*digit;
        sum=sum+power;
        temp=temp/10;
    }
    if(sum==original) cout<<"Armstrong"<<endl;
    else cout<<"Not Armstrong"<<endl;
    return 0;
}
