#include<iostream>
using namespace std;
int main(){
    int n;
    
    cout<<"Enter the no of elements: ";
    cin>>n;

    int a[n];
    
    for(int i=0;i<n;i++) 
        cin>>a[i];
    int maxFreq=0, element=a[0];
    for(int i=0;i<n;i++)
    {
        int count=0;
        for(int j=0;j<n;j++)
        {
            if(a[j]==a[i]) 
                count++;
        }
        if(count>maxFreq)
        { maxFreq=count; 
         element=a[i]; }
    }
    cout<<"Max frequency element = "<<element<<" (appears "<<maxFreq<<" times)"<<"\n";
    return 0;
}
