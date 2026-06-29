#include<iostream>
#include<string.h>
using namespace std;
int main(){
    char itemName[50][50];
    int itemId[50], quantity[50];
    float price[50];
    int count=0, choice, id;
    do {
        cout<<"\n1. Add Item\n2. Display\n3. Search\n4. Update Qty\n5. Exit\nChoice: ";
        cin>>choice;
        if(choice==1){
            cout<<"ID Name Price Qty: ";
            cin>>itemId[count]>>itemName[count]>>price[count]>>quantity[count];
            count++;
        } else if(choice==2){
            for(int i=0;i<count;i++)
                cout<<"ID:"<<itemId[i]<<" "<<itemName[i]<<" Price:"<<price[i]<<" Qty:"<<quantity[i]<<endl;
        } else if(choice==3){
            cout<<"Item ID: "; cin>>id;
            int found=0;
            for(int i=0;i<count;i++) if(itemId[i]==id){ cout<<itemName[i]<<" Qty:"<<quantity[i]<<endl; found=1; }
            if(!found) cout<<"Not found\n";
        } else if(choice==4){
            cout<<"Item ID and new quantity: "; cin>>id;
            int qty; cin>>qty;
            for(int i=0;i<count;i++) if(itemId[i]==id){ quantity[i]=qty; cout<<"Updated\n"; }
        }
    } while(choice!=5);
    return 0;
}
