#include<iostream>
using namespace std;

int main(){
    
    int n, a[100],even=0,odd=0;
    
    cout<<"Enter size: ";
    cin>>n;
    
    for(int i=0;i<n;i++)
        cin>>a[i];
    for(int i=0;i<n;i++){
        if(a[i]%2==0) even++;
        else odd++;
    }
    
    cout<<"Even count = "<<even<<endl;
    cout<<"Odd count = "<<odd<<endl;
    
    return 0;
}
