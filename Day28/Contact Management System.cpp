#include<iostream>
#include<string.h>
using namespace std;
int main(){
    char name[50][50], phone[50][15];
    int count=0, choice;
    char search[50];
    do {
        cout<<"\n1. Add Contact\n2. Display All\n3. Search\n4. Exit\nChoice: ";
        cin>>choice;
        if(choice==1){
            cout<<"Name: "; cin>>name[count];
            cout<<"Phone: "; cin>>phone[count];
            count++;
            cout<<"Contact added.\n";
        } else if(choice==2){
            for(int i=0;i<count;i++) cout<<name[i]<<" - "<<phone[i]<<endl;
        } else if(choice==3){
            cout<<"Search name: "; cin>>search;
            int found=0;
            for(int i=0;i<count;i++){
                if(strcmp(name[i],search)==0){ cout<<"Phone: "<<phone[i]<<endl; found=1; }
            }
            if(found==0) cout<<"Not found\n";
        }
    } while(choice!=4);
    return 0;
}
