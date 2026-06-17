#include<iostream>
using namespace std;
int main(){
    int n, a[100], 
    target;
    cout<<"Enter no of elemnts: ";
    cin>>n;
    for(int i=0;i<n;i++) 
        cin>>a[i];
    cout<<"Enter the target sum : ";
    cin>>target;
    int found=0;
    
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++)
        {
            if(a[i]+a[j]==target){
                cout<<"Pair: "<<a[i]<<" + "<<a[j]<<"\n";
                found=1;
            }
        }
    }
    if(found==0) 
        cout<<"No pair found"<<"\n";
    return 0;
}
