#include<iostream>

using namespace std;
int main()
{
    int n, a[100], k;
    
    cout<<"Enter the number of elements: ";
    cin>>n;
    for(int i=0;i<n;i++) 
        cin>>a[i];
    cout<<"Enter positions to rotate: ";
    cin>>k;
    
    for(int r=0;r<k;r++){
        int temp=a[0];
        for(int i=0;i<n-1;i++)
            a[i]=a[i+1];
        a[n-1]=temp;
    }
    cout<<"After the left rotation: ";
    
    for(int i=0;i<n;i++) 
        cout<<a[i]<<" ";
    cout<<"\n";
    return 0;
}
