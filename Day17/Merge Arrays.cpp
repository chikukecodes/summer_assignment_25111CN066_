#include<iostream>
using namespace std;
int main(){
    int n, m, a[100], b[100], c[200];
    cout<<"Enter size of first array: ";
    cin>>n;
    for(int i=0;i<n;i++) cin>>a[i];
    cout<<"Enter size of second array: ";
    cin>>m;
    for(int i=0;i<m;i++) cin>>b[i];
    for(int i=0;i<n;i++) c[i]=a[i];
    for(int i=0;i<m;i++) c[n+i]=b[i];
    cout<<"Merged array: ";
    for(int i=0;i<n+m;i++) cout<<c[i]<<" ";
    cout<<endl;
    return 0;
}
