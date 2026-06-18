#include<iostream>
using namespace std;
int main(){
    int n, a[100], temp;
    cout<<"Enter size: ";
    cin>>n;
    for(int i=0;i<n;i++) 
        cin>>a[i];
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-1-i;j++){
            if(a[j]>a[j+1]){ 
                temp=a[j];
             a[j]=a[j+1];
          a[j+1]=temp; }
        }
    }
    cout<<"Sorted: ";
    for(int i=0;i<n;i++) 
        cout<<a[i]<<" ";
    cout<<endl;
    return 0;
}
