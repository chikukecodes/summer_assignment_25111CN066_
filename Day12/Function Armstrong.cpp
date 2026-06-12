#include<iostream>
using namespace std;
int isArmstrong(int n){
    int temp=n, digits=0, sum=0, digit;
    while(temp!=0){ digits++; temp=temp/10; }
    temp=n;
    while(temp!=0){
        digit=temp%10;
        int power=1;
        for(int i=0;i<digits;i++) power=power*digit;
        sum=sum+power;
        temp=temp/10;
    }
    if(sum==n) return 1;
    return 0;
}
int main(){
    int n;
    cout<<"Enter number: ";
    cin>>n;
    if(isArmstrong(n)) cout<<"Armstrong"<<endl;
    else cout<<"Not Armstrong"<<endl;
    return 0;
}
