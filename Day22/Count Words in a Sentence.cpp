#include<iostream>
using namespace std;
int main(){
    char s[200];
    cout<<"Enter sentence: ";
    cin.getline(s,200);
    int count=0, i=0;
    while(s[i]==' ') i++;
    while(s[i]!='\0'){
        if(s[i]!=' ' && (s[i+1]==' '||s[i+1]=='\0')) count++;
        i++;
    }
    cout<<"Words = "<<count<<endl;
    return 0;
}
