#include<iostream>
#include<string.h>
using namespace std;
int main(){
    char title[30][100], author[30][50];
    int bookId[30], available[30], count=0, choice, id;
    do {
        cout<<"\n1. Add Book\n2. Display\n3. Issue Book\n4. Return Book\n5. Exit\nChoice: "; cin>>choice;
        if(choice==1){
            cout<<"ID Title Author: ";
            cin>>bookId[count]>>title[count]>>author[count];
            available[count]=1; count++;
            cout<<"Book added.\n";
        } else if(choice==2){
            for(int i=0;i<count;i++)
                cout<<"ID:"<<bookId[i]<<" "<<title[i]<<" by "<<author[i]<<" "<<(available[i]?"Available":"Issued")<<endl;
        } else if(choice==3){
            cout<<"Book ID: "; cin>>id;
            for(int i=0;i<count;i++) if(bookId[i]==id){
                if(available[i]){ available[i]=0; cout<<"Issued.\n"; }
                else cout<<"Already issued.\n";
            }
        } else if(choice==4){
            cout<<"Book ID: "; cin>>id;
            for(int i=0;i<count;i++) if(bookId[i]==id){ available[i]=1; cout<<"Returned.\n"; }
        }
    } while(choice!=5);
    return 0;
}
