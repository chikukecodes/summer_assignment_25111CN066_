#include<iostream>
using namespace std;
int main(){
    int n, a[100], target;
    cout<<"Enter size: ";
    cin>>n;
    for(int i=0;i<n;i++) cin>>a[i];
    cout<<"Enter target sum: ";
    cin>>target;
    int found=0;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(a[i]+a[j]==target){
                cout<<"Pair: "<<a[i]<<" + "<<a[j]<<endl;
                found=1;
            }
        }
    }
    if(found==0) cout<<"No pair found"<<endl;
    return 0;
}
