#include<iostream>
using namespace std;
int main(){
    char s[100];
    cout<<"Enter string: ";
    cin>>s;
    int len=0;
    while(s[len]!='\0') len++;
    int start=0, end=len-1;
    char temp;
    while(start<end){
        temp=s[start]; s[start]=s[end]; s[end]=temp;
        start++; end--;
    }
    cout<<"Reversed = "<<s<<endl;
    return 0;
}
