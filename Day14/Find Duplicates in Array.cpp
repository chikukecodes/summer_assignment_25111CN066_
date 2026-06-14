#include<iostream>
using namespace std;
int main(){
    int n, a[100];
    cout<<"Enter size: ";
    cin>>n;
    for(int i=0;i<n;i++) cin>>a[i];
    cout<<"Duplicates: ";
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(a[i]==a[j]){ cout<<a[i]<<" "; break; }
        }
    }
    cout<<endl;
    return 0;
}
