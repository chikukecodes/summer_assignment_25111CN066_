#include<iostream>
using namespace std;
int main(){
    char s[100];
    cout<<"Enter string: ";
    cin>>s;
    int freq[256]={0};
    for(int i=0;s[i]!='\0';i++) freq[(int)s[i]]++;
    for(int i=0;i<256;i++){
        if(freq[i]>0) cout<<(char)i<<" = "<<freq[i]<<endl;
    }
    return 0;
}
