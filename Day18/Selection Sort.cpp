#include<iostream>
using namespace std;
int main(){
    int n, a[100], temp, minIndex;
    cout<<"Enter size: ";
    cin>>n;
    for(int i=0;i<n;i++) cin>>a[i];
    for(int i=0;i<n-1;i++){
        minIndex=i;
        for(int j=i+1;j<n;j++){
            if(a[j]<a[minIndex]) minIndex=j;
        }
        temp=a[i]; a[i]=a[minIndex]; a[minIndex]=temp;
    }
    cout<<"Sorted: ";
    for(int i=0;i<n;i++) cout<<a[i]<<" ";
    cout<<endl;
    return 0;
}
