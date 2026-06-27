#include<iostream>
using namespace std;
int main(){
    char name[50];
    float basic, hra, da, gross, tax, net;
    cout<<"Enter employee name: ";
    cin>>name;
    cout<<"Enter basic salary: ";
    cin>>basic;
    hra=0.20*basic;
    da=0.10*basic;
    gross=basic+hra+da;
    if(gross>50000) tax=0.10*gross;
    else tax=0;
    net=gross-tax;
    cout<<"Employee: "<<name<<endl;
    cout<<"Basic: "<<basic<<" HRA: "<<hra<<" DA: "<<da<<endl;
    cout<<"Gross: "<<gross<<" Tax: "<<tax<<" Net: "<<net<<endl;
    return 0;
}
