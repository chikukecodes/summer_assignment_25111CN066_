#include<iostream>
using namespace std;
int main(){
    int balance=10000, pin=1234, enteredPin, choice, amount;
    cout<<"Enter PIN: ";
    cin>>enteredPin;
    if(enteredPin!=pin){ cout<<"Wrong PIN"<<endl; return 0; }
    do {
        cout<<"\n1. Check Balance\n2. Deposit\n3. Withdraw\n4. Exit\nChoice: ";
        cin>>choice;
        if(choice==1) cout<<"Balance = "<<balance<<endl;
        else if(choice==2){
            cout<<"Amount to deposit: "; cin>>amount;
            balance=balance+amount;
            cout<<"Deposited. Balance = "<<balance<<endl;
        } else if(choice==3){
            cout<<"Amount to withdraw: "; cin>>amount;
            if(amount>balance) cout<<"Insufficient balance"<<endl;
            else { balance=balance-amount; cout<<"Withdrawn. Balance = "<<balance<<endl; }
        }
    } while(choice!=4);
    return 0;
}
