#include<iostream>
#include<string.h>
using namespace std;
int main(){
    char s1[100], s2[100], combined[200];
    cout<<"Enter first string: ";
    cin>>s1;
    cout<<"Enter second string: ";
    cin>>s2;
    if(strlen(s1)!=strlen(s2)){ cout<<"Not a rotation"<<endl; return 0; }
    strcpy(combined, s1);
    strcat(combined, s1);
    if(strstr(combined, s2)!=NULL) cout<<"Rotation"<<endl;
    else cout<<"Not a rotation"<<endl;
    return 0;
}
