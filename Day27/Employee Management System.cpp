#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter number of employees: ";
    cin>>n;
    char name[50][50], dept[50][50];
    int id[50];
    float salary[50];
    for(int i=0;i<n;i++){
        cout<<"Enter name, id, department, salary: ";
        cin>>name[i]>>id[i]>>dept[i]>>salary[i];
    }
    cout<<"\nEmployee Records:\n";
    for(int i=0;i<n;i++){
        cout<<"Name: "<<name[i]<<" ID: "<<id[i]<<" Dept: "<<dept[i]<<" Salary: "<<salary[i]<<endl;
    }
    return 0;
}
