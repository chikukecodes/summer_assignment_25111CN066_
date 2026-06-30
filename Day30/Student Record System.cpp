#include<iostream>
#include<string.h>
using namespace std;
int main(){
    char name[50][50];
    int roll[50], marks[50][5], total[50];
    float avg[50];
    char grade[50];
    int n, choice;
    cout<<"Enter number of students: "; cin>>n;
    for(int i=0;i<n;i++){
        cout<<"Enter name and roll: "; cin>>name[i]>>roll[i];
        total[i]=0;
        for(int j=0;j<5;j++){ cout<<"Subject "<<j+1<<" marks: "; cin>>marks[i][j]; total[i]+=marks[i][j]; }
        avg[i]=total[i]/5.0;
        if(avg[i]>=90) grade[i]='A';
        else if(avg[i]>=80) grade[i]='B';
        else if(avg[i]>=70) grade[i]='C';
        else if(avg[i]>=60) grade[i]='D';
        else grade[i]='F';
    }
    do {
        cout<<"\n1. Display All\n2. Search\n3. Exit\nChoice: "; cin>>choice;
        if(choice==1){
            for(int i=0;i<n;i++){
                cout<<"Name:"<<name[i]<<" Roll:"<<roll[i]<<" Total:"<<total[i]<<" Avg:"<<avg[i]<<" Grade:"<<grade[i]<<endl;
            }
        } else if(choice==2){
            int r; cout<<"Roll: "; cin>>r;
            int found=0;
            for(int i=0;i<n;i++) if(roll[i]==r){ cout<<"Name:"<<name[i]<<" Avg:"<<avg[i]<<" Grade:"<<grade[i]<<endl; found=1; }
            if(!found) cout<<"Not found\n";
        }
    } while(choice!=3);
    return 0;
}
