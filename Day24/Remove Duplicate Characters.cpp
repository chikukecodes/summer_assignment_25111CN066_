#include<iostream>
using namespace std;
int main(){
    char s[100], result[100];
    int seen[256]={0}, j=0;
    cout<<"Enter string: ";
    cin>>s;
    for(int i=0;s[i]!='\0';i++){
        if(seen[(int)s[i]]==0){ result[j]=s[i]; j++; seen[(int)s[i]]=1; }
    }
    result[j]='\0';
    cout<<"Without duplicates: "<<result<<endl;
    return 0;
}
