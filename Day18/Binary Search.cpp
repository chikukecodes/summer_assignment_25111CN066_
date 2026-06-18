#include<iostream>
using namespace std;
int main(){
    int n, a[100], key, low, high, mid;
    cout<<"Enter size (sorted array): ";
    cin>>n;
    for(int i=0;i<n;i++) cin>>a[i];
    cout<<"Enter key: ";
    cin>>key;
    low=0; high=n-1;
    int found=0;
    while(low<=high){
        mid=(low+high)/2;
        if(a[mid]==key){ cout<<"Found at index "<<mid<<endl; found=1; break; }
        else if(a[mid]<key) low=mid+1;
        else high=mid-1;
    }
    if(found==0) cout<<"Not found"<<endl;
    return 0;
}
