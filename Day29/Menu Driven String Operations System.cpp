#include<iostream>
#include<string.h>
using namespace std;
int main(){
    char s[200], s2[200];
    int choice;
    do {
        cout<<"\n1. Input\n2. Length\n3. Reverse\n4. Uppercase\n5. Palindrome\n6. Concatenate\n7. Exit\nChoice: ";
        cin>>choice;
        if(choice==1){ cout<<"String: "; cin>>s; }
        else if(choice==2){ int len=0; while(s[len]) len++; cout<<"Length = "<<len<<endl; }
        else if(choice==3){
            int len=strlen(s); char temp;
            for(int i=0;i<len/2;i++){ temp=s[i]; s[i]=s[len-1-i]; s[len-1-i]=temp; }
            cout<<"Reversed: "<<s<<endl;
        } else if(choice==4){
            for(int i=0;s[i];i++) if(s[i]>='a'&&s[i]<='z') s[i]-=32;
            cout<<"Upper: "<<s<<endl;
        } else if(choice==5){
            int len=strlen(s), flag=1;
            for(int i=0;i<len/2;i++) if(s[i]!=s[len-1-i]){ flag=0; break; }
            cout<<(flag?"Palindrome":"Not Palindrome")<<endl;
        } else if(choice==6){
            cout<<"Second string: "; cin>>s2;
            strcat(s,s2);
            cout<<"Concatenated: "<<s<<endl;
        }
    } while(choice!=7);
    return 0;
}
