#include<iostream>
#include<string.h>
using namespace std;
int main(){
    char title[20][100], author[20][100];
    int bookId[20], count=0, choice, id;
    do {
        cout<<"\n1. Add Book\n2. Display Books\n3. Search Book\n4. Exit\nChoice: ";
        cin>>choice;
        if(choice==1){
            cout<<"Enter book ID, title, author: ";
            cin>>bookId[count]>>title[count]>>author[count];
            count++;
            cout<<"Book added.\n";
        } else if(choice==2){
            for(int i=0;i<count;i++)
                cout<<"ID: "<<bookId[i]<<" Title: "<<title[i]<<" Author: "<<author[i]<<endl;
        } else if(choice==3){
            cout<<"Enter book ID: "; cin>>id;
            int found=0;
            for(int i=0;i<count;i++){
                if(bookId[i]==id){ cout<<"Title: "<<title[i]<<" Author: "<<author[i]<<endl; found=1; break; }
            }
            if(found==0) cout<<"Not found\n";
        }
    } while(choice!=4);
    return 0;
}
