#include<iostream>
using namespace std;
int main(){
    char name[50];
    int accNo;
    float balance;
    cout<<"Enter account holder name, account number, initial balance: ";
    cin>>name>>accNo>>balance;
    int choice; float amount;
    do {
        cout<<"\n1. Deposit\n2. Withdraw\n3. Check Balance\n4. Exit\nChoice: ";
        cin>>choice;
        if(choice==1){
            cout<<"Amount: "; cin>>amount;
            balance+=amount;
            cout<<"Deposited. Balance = "<<balance<<endl;
        } else if(choice==2){
            cout<<"Amount: "; cin>>amount;
            if(amount>balance) cout<<"Insufficient funds\n";
            else { balance-=amount; cout<<"Withdrawn. Balance = "<<balance<<endl; }
        } else if(choice==3){
            cout<<"Balance = "<<balance<<endl;
        }
    } while(choice!=4);
    return 0;
}
