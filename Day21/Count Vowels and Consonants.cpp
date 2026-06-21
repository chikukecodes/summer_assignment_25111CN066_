#include<iostream>
using namespace std;
int main(){
    char s[100];
    int vowels=0, consonants=0;
    cout<<"Enter string: ";
    cin>>s;
    for(int i=0;s[i]!='\0';i++){
        char c=s[i];
        if(c>='A' && c<='Z') c=c+32;
        if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u') vowels++;
        else if(c>='a'&&c<='z') consonants++;
    }
    cout<<"Vowels = "<<vowels<<endl;
    cout<<"Consonants = "<<consonants<<endl;
    return 0;
}
