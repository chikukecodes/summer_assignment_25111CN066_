#include<iostream>
using namespace std;
int main(){
    int n, a[100];
    cout<<"Enter size: ";
    cin>>n;
    for(int i=0;i<n;i++) cin>>a[i];
    int start=0, end=n-1, temp;
    while(start<end){
        temp=a[start]; a[start]=a[end]; a[end]=temp;
        start++; end--;
    }
    cout<<"Reversed: ";
    for(int i=0;i<n;i++) cout<<a[i]<<" ";
    cout<<endl;
    return 0;
}
