#include<iostream>

using namespace std;

int main()
{
    int n, a[100], key, count=0;
    
    cout<<"Enter size: ";
    cin>>n;
    
    for(int i=0;i<n;i++) cin>>a[i];
    
    cout<<"Enter key: ";
    cin>>key;
    
    for(int i=0;i<n;i++)
    {
        if(a[i]==key)
            count++;
    }
    cout<<"Frequency = "<<count<<endl;
    
    return 0;
}
