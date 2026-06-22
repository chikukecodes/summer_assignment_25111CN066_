#include<iostream>
using namespace std;
int main(){
    char s[200];
    cout<<"Enter string: ";
    cin.getline(s,200);
    int j=0;
    for(int i=0;s[i]!='\0';i++){
        if(s[i]!=' '){ s[j]=s[i]; j++; }
    }
    s[j]='\0';
    cout<<"Without spaces: "<<s<<endl;
    return 0;
}
