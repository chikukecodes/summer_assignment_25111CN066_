#include<iostream>
#include<string.h>
using namespace std;
int main(){
    char name[30][50], dept[30][50];
    int empId[30], count=0, choice, id;
    float salary[30];
    do {
        cout<<"\n1. Add\n2. Display\n3. Search\n4. Update Salary\n5. Exit\nChoice: "; cin>>choice;
        if(choice==1){
            cout<<"ID Name Dept Salary: ";
            cin>>empId[count]>>name[count]>>dept[count]>>salary[count];
            count++;
        } else if(choice==2){
            for(int i=0;i<count;i++)
                cout<<"ID:"<<empId[i]<<" "<<name[i]<<" "<<dept[i]<<" Salary:"<<salary[i]<<endl;
        } else if(choice==3){
            cout<<"Employee ID: "; cin>>id;
            int found=0;
            for(int i=0;i<count;i++) if(empId[i]==id){ cout<<name[i]<<" "<<dept[i]<<" "<<salary[i]<<endl; found=1; }
            if(!found) cout<<"Not found\n";
        } else if(choice==4){
            cout<<"ID and new salary: "; cin>>id;
            float s; cin>>s;
            for(int i=0;i<count;i++) if(empId[i]==id){ salary[i]=s; cout<<"Updated.\n"; }
        }
    } while(choice!=5);
    return 0;
}
