#include<iostream>
using namespace std;
int main(){
    int n, a[10][10], sum=0;
    cout<<"Enter size of square matrix: ";
    cin>>n;
    for(int i=0;i<n;i++) for(int j=0;j<n;j++) cin>>a[i][j];
    for(int i=0;i<n;i++) sum=sum+a[i][i];
    cout<<"Diagonal sum = "<<sum<<endl;
    return 0;
}
