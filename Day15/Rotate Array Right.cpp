#include<iostream>
using namespace std;
int main(){
    int n, a[100], k;
    cout<<"Enter size: ";
    cin>>n;
    for(int i=0;i<n;i++) cin>>a[i];
    cout<<"Enter positions to rotate: ";
    cin>>k;
    for(int r=0;r<k;r++){
        int temp=a[n-1];
        for(int i=n-1;i>0;i--) a[i]=a[i-1];
        a[0]=temp;
    }
    cout<<"After right rotation: ";
    for(int i=0;i<n;i++) cout<<a[i]<<" ";
    cout<<endl;
    return 0;
}
