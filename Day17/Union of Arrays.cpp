#include<iostream>
using namespace std;
int main(){
    int n, m, a[100], b[100], c[200], size=0;
    
    cout<<"Enter the elements of first array: ";
    cin>>n;
    
    for(int i=0;i<n;i++) 
        cin>>a[i];
    cout<<"Enter the elements of second array: ";
    cin>>m;
    
    for(int i=0;i<m;i++) 
        cin>>b[i];
    for(int i=0;i<n;i++)
    { c[size]=a[i]; 
     size++; 
    }
    for(int i=0;i<m;i++){
        int found=0;
        for(int j=0;j<n;j++){
            if(b[i]==a[j])
            {
                found=1; 
             break; 
            }
        }
        if(found==0)
        { c[size]=b[i]; 
         size++; 
        }
    }
    cout<<"Union is: ";
    for(int i=0;i<size;i++) 
        cout<<c[i]<<" ";
    cout<<"\n";
    return 0;
}
