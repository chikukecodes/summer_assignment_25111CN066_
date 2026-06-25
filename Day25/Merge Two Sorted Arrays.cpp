#include<iostream>
using namespace std;
int main(){
    int n, m, a[100], b[100], c[200];
    cout<<"Enter size of first sorted array: ";
    cin>>n;
    for(int i=0;i<n;i++) cin>>a[i];
    cout<<"Enter size of second sorted array: ";
    cin>>m;
    for(int i=0;i<m;i++) cin>>b[i];
    int i=0, j=0, k=0;
    while(i<n && j<m){
        if(a[i]<b[j]){ c[k]=a[i]; i++; }
        else { c[k]=b[j]; j++; }
        k++;
    }
    while(i<n){ c[k]=a[i]; i++; k++; }
    while(j<m){ c[k]=b[j]; j++; k++; }
    cout<<"Merged sorted: ";
    for(int x=0;x<n+m;x++) cout<<c[x]<<" ";
    cout<<endl;
    return 0;
}
