#include<iostream>
#include<string.h>
using namespace std;
int main(){
    int n;
    char words[50][50], temp[50];
    cout<<"Enter number of words: ";
    cin>>n;
    for(int i=0;i<n;i++) cin>>words[i];
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-1-i;j++){
            if(strlen(words[j])>strlen(words[j+1])){
                strcpy(temp,words[j]);
                strcpy(words[j],words[j+1]);
                strcpy(words[j+1],temp);
            }
        }
    }
    cout<<"Sorted by length:\n";
    for(int i=0;i<n;i++) cout<<words[i]<<endl;
    return 0;
}
