#include<iostream>
using namespace std;
int main(){
    char s[100];
    cout<<"Enter string: ";
    cin>>s;
    cout<<"Compressed: ";
    int i=0;
    while(s[i]!='\0'){
        char c=s[i];
        int count=0;
        while(s[i]==c){ count++; i++; }
        cout<<c;
        if(count>1) cout<<count;
    }
    cout<<endl;
    return 0;
}
