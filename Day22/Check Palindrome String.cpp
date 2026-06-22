#include<iostream>
using namespace std;
int main(){
    char s[100];
    cout<<"Enter string: ";
    cin>>s;
    int len=0;
    while(s[len]!='\0') len++;
    int flag=1;
    for(int i=0;i<len/2;i++){
        if(s[i]!=s[len-1-i]){ flag=0; break; }
    }
    if(flag==1) cout<<"Palindrome"<<endl;
    else cout<<"Not Palindrome"<<endl;
    return 0;
}
