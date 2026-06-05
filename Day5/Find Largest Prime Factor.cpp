#include<iostream>
using namespace std;
int main(){
    int n, largest=1;
    cout<<"Enter number: ";
    cin>>n;
    for(int i=2;i<=n;i++){
        if(n%i==0){
            int flag=1;
            for(int j=2;j<i;j++){
                if(i%j==0){ flag=0; break; }
            }
            if(flag==1) largest=i;
        }
    }
    cout<<"Largest prime factor = "<<largest<<endl;
    return 0;
}
