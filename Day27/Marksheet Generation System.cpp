#include<iostream>
using namespace std;
int main(){
    char name[50];
    int roll, marks[5], total=0;
    float avg;
    char grade;
    cout<<"Enter name and roll: ";
    cin>>name>>roll;
    for(int i=0;i<5;i++){
        cout<<"Enter marks for subject "<<i+1<<": ";
        cin>>marks[i];
        total=total+marks[i];
    }
    avg=total/5.0;
    if(avg>=90) grade='A';
    else if(avg>=80) grade='B';
    else if(avg>=70) grade='C';
    else if(avg>=60) grade='D';
    else grade='F';
    cout<<"\n--- Marksheet ---\n";
    cout<<"Name: "<<name<<" Roll: "<<roll<<endl;
    for(int i=0;i<5;i++) cout<<"Subject "<<i+1<<": "<<marks[i]<<endl;
    cout<<"Total: "<<total<<" Average: "<<avg<<" Grade: "<<grade<<endl;
    return 0;
}
