#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter number of students: ";
    cin>>n;
    char name[50][50];
    int roll[50], marks[50];
    for(int i=0;i<n;i++){
        cout<<"Enter name, roll, marks: ";
        cin>>name[i]>>roll[i]>>marks[i];
    }
    cout<<"\nStudent Records:\n";
    for(int i=0;i<n;i++){
        cout<<"Name: "<<name[i]<<" Roll: "<<roll[i]<<" Marks: "<<marks[i]<<endl;
    }
    return 0;
}
