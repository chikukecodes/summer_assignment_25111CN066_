#include<iostream>
using namespace std;
int main(){
    int a, b, x, y;
    cout<<"Enter two numbers: ";
    cin>>a>>b;
    x=a; y=b;
    while(x!=y){
        if(x<y) x=x+a;
        else y=y+b;
    }
    cout<<"LCM = "<<x<<endl;
    return 0;
}
