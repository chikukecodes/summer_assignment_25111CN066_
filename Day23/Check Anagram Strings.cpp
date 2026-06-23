#include<iostream>
using namespace std;
int main(){
    char s1[100], s2[100];
    int freq[256]={0};
    cout<<"Enter first string: ";
    cin>>s1;
    cout<<"Enter second string: ";
    cin>>s2;
    for(int i=0;s1[i]!='\0';i++) freq[(int)s1[i]]++;
    for(int i=0;s2[i]!='\0';i++) freq[(int)s2[i]]--;
    int flag=1;
    for(int i=0;i<256;i++){
        if(freq[i]!=0){ flag=0; break; }
    }
    if(flag==1) cout<<"Anagram"<<endl;
    else cout<<"Not Anagram"<<endl;
    return 0;
}
