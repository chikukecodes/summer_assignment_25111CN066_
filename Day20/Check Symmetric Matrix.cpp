#include<iostream>
using namespace std;
int main(){
    int n, a[10][10], flag=1;
    cout<<"Enter size: ";
    cin>>n;
    for(int i=0;i<n;i++) for(int j=0;j<n;j++) cin>>a[i][j];
    for(int i=0;i<n;i++) for(int j=0;j<n;j++){
        if(a[i][j]!=a[j][i]){ flag=0; break; }
    }
    if(flag==1) cout<<"Symmetric"<<endl;
    else cout<<"Not Symmetric"<<endl;
    return 0;
}
