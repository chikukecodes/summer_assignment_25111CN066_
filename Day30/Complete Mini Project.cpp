#include<iostream>
#include<string.h>
using namespace std;

// Student data
char sName[30][50];
int sRoll[30], sMarks[30];
int sCount=0;

// Book data
char bTitle[30][50];
int bId[30], bAvail[30];
int bCount=0;

void addStudent(){
    cout<<"Name Roll Marks: ";
    cin>>sName[sCount]>>sRoll[sCount]>>sMarks[sCount];
    sCount++;
    cout<<"Student added.\n";
}
void displayStudents(){
    for(int i=0;i<sCount;i++)
        cout<<"Roll:"<<sRoll[i]<<" Name:"<<sName[i]<<" Marks:"<<sMarks[i]<<endl;
}
void addBook(){
    cout<<"ID Title: ";
    cin>>bId[bCount]>>bTitle[bCount];
    bAvail[bCount]=1; bCount++;
    cout<<"Book added.\n";
}
void displayBooks(){
    for(int i=0;i<bCount;i++)
        cout<<"ID:"<<bId[i]<<" "<<bTitle[i]<<" "<<(bAvail[i]?"Available":"Issued")<<endl;
}

int main(){
    int choice;
    do {
        cout<<"\n--- Mini School System ---\n";
        cout<<"1. Add Student\n2. Display Students\n3. Add Book\n4. Display Books\n5. Exit\nChoice: ";
        cin>>choice;
        if(choice==1) addStudent();
        else if(choice==2) displayStudents();
        else if(choice==3) addBook();
        else if(choice==4) displayBooks();
    } while(choice!=5);
    return 0;
}
