#include<iostream>
#include<string.h>
using namespace std;
int main(){
    int n;
    char names[50][50], temp[50];
    cout<<"Enter number of names: ";
    cin>>n;
    for(int i=0;i<n;i++) cin>>names[i];
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-1-i;j++){
            if(strcmp(names[j],names[j+1])>0){
                strcpy(temp,names[j]);
                strcpy(names[j],names[j+1]);
                strcpy(names[j+1],temp);
            }
        }
    }
    cout<<"Sorted names:\n";
    for(int i=0;i<n;i++) cout<<names[i]<<endl;
    return 0;
}
