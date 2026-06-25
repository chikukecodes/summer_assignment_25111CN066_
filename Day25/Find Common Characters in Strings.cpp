#include<iostream>
using namespace std;
int main(){
    char s1[100], s2[100];
    cout<<"Enter first string: ";
    cin>>s1;
    cout<<"Enter second string: ";
    cin>>s2;
    cout<<"Common characters: ";
    for(int i=0;s1[i]!='\0';i++){
        for(int j=0;s2[j]!='\0';j++){
            if(s1[i]==s2[j]){ cout<<s1[i]<<" "; break; }
        }
    }
    cout<<endl;
    return 0;
}
