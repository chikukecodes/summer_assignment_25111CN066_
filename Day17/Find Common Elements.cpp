#include<iostream>
using namespace std;
int main(){
    int n, m, a[100], b[100];
    cout<<"Enter size of first array: ";
    cin>>n;
    for(int i=0;i<n;i++) cin>>a[i];
    cout<<"Enter size of second array: ";
    cin>>m;
    for(int i=0;i<m;i++) cin>>b[i];
    cout<<"Common elements: ";
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(a[i]==b[j]){ cout<<a[i]<<" "; break; }
        }
    }
    cout<<endl;
    return 0;
}
