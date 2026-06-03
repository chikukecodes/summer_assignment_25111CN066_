#include<iostream>
using namespace std;
int main(){
    int a, b;
    cout<<"Enter range (a b): ";
    cin>>a>>b;
    for(int n=a;n<=b;n++){
        int flag=1;
        if(n<=1) flag=0;
        for(int i=2;i<n;i++){
            if(n%i==0){
                flag=0;
                break;
            }
        }
        if(flag==1) cout<<n<<" ";
    }
    cout<<endl;
    return 0;
}
