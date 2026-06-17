#include<iostream>
using namespace std;
int main(){
    int n, a[100], b[100], size=0;
    cout<<"Enter size: ";
    cin>>n;
    for(int i=0;i<n;i++) cin>>a[i];
    for(int i=0;i<n;i++){
        int found=0;
        for(int j=0;j<size;j++){
            if(b[j]==a[i]){ found=1; break; }
        }
        if(found==0){ b[size]=a[i]; size++; }
    }
    cout<<"Array without duplicates: ";
    for(int i=0;i<size;i++) cout<<b[i]<<" ";
    cout<<endl;
    return 0;
}
