#include<iostream>
#include<cstring>
using namespace std;
int main(){
    char s[200], word[100], longest[100];
    cout<<"Enter sentence: ";
    cin.getline(s,200);
    int maxLen=0, i=0, j=0;
    while(s[i]!='\0'){
        if(s[i]!=' '){
            word[j]=s[i]; j++;
        } else {
            word[j]='\0';
            if(j>maxLen){ maxLen=j; strcpy(longest,word); }
            j=0;
        }
        i++;
    }
    word[j]='\0';
    if(j>maxLen) strcpy(longest,word);
    cout<<"Longest word = "<<longest<<endl;
    return 0;
}
