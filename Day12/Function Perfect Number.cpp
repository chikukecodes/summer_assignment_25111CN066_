#include<iostream>
using namespace std;
int isPerfect(int n){
    int sum=0;
    for(int i=1;i<n;i++){
        if(n%i==0) sum=sum+i;
    }
    if(sum==n) return 1;
    return 0;
}
int main(){
    int n;
    cout<<"Enter number: ";
    cin>>n;
    if(isPerfect(n)) cout<<"Perfect Number"<<endl;
    else cout<<"Not Perfect Number"<<endl;
    return 0;
}
