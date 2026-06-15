#include<iostream>
using namespace std;
int main(){
    int n, a[100];
    cout<<"Enter size: ";
    cin>>n;
    for(int i=0;i<n;i++) cin>>a[i];
    int pos=0;
    for(int i=0;i<n;i++){
        if(a[i]!=0){ a[pos]=a[i]; pos++; }
    }
    while(pos<n){ a[pos]=0; pos++; }
    cout<<"Array: ";
    for(int i=0;i<n;i++) cout<<a[i]<<" ";
    cout<<endl;
    return 0;
}
