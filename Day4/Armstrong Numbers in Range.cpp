#include<iostream>
using namespace std;
int main(){
    int a, b;
    cout<<"Enter range (a b): ";
    cin>>a>>b;
    for(int n=a;n<=b;n++){
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
        if(sum==n) cout<<n<<" ";
    }
    cout<<endl;
    return 0;
}
