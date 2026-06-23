#include<iostream>
using namespace std;
int main(){
    char s[100];
    cout<<"Enter string: ";
    cin>>s;
    int freq[256]={0};
    for(int i=0;s[i]!='\0';i++) freq[(int)s[i]]++;
    for(int i=0;s[i]!='\0';i++){
        if(freq[(int)s[i]]==1){ cout<<"First non-repeating = "<<s[i]<<endl; return 0; }
    }
    cout<<"No non-repeating character"<<endl;
    return 0;
}
