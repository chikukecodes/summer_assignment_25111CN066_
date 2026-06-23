#include<iostream>
using namespace std;
int main(){
    char s[100];
    cout<<"Enter string: ";
    cin>>s;
    int freq[256]={0};
    for(int i=0;s[i]!='\0';i++) freq[(int)s[i]]++;
    int maxFreq=0; char maxChar=' ';
    for(int i=0;i<256;i++){
        if(freq[i]>maxFreq){ maxFreq=freq[i]; maxChar=(char)i; }
    }
    cout<<"Max occurring = "<<maxChar<<" ("<<maxFreq<<" times)"<<endl;
    return 0;
}
