#include<iostream>
using namespace std;
int main(){
    int n, a[100];
    cout<<"Enter size (numbers from 1 to n+1): ";
    cin>>n;
    for(int i=0;i<n;i++) cin>>a[i];
    int total=(n+1)*(n+2)/2, sum=0;
    for(int i=0;i<n;i++) sum=sum+a[i];
    cout<<"Missing number = "<<total-sum<<endl;
    return 0;
}
