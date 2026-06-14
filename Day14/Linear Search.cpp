#include<iostream>
using namespace std;

int main()
{
    int n, a[100], key, found=0;
    
    cout<<"Enter size: ";
    cin>>n;
    
    for(int i=0;i<n;i++) 
        cin>>a[i];
    cout<<"Enter key: ";
    cin>>key;
    for(int i=0;i<n;i++)
    {
        if(a[i]==key)
        { cout<<"Found at position "<<i
            +1<<endl; found=1; break; }
    }
    if(found==0)
        cout<<"Not found"<<endl;
    return 0;
}
