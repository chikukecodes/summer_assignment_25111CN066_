#include<iostream>
using namespace std;
int main(){
    char s[100];
    cout<<"Enter string: ";
    cin>>s;
    int len=0;
    while(s[len]!='\0') len++;
    cout<<"Length = "<<len<<endl;
    return 0;
}
