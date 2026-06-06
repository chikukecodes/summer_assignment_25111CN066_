#include<iostream>
using namespace std;
int main(){
    int n, binary[32], count=0;
    cout<<"Enter decimal number: ";
    cin>>n;
    while(n>0){
        binary[count]=n%2;
        n=n/2;
        count++;
    }
    cout<<"Binary = ";
    for(int i=count-1;i>=0;i--) cout<<binary[i];
    cout<<endl;
    return 0;
}
