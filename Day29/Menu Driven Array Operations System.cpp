#include<iostream>
using namespace std;
int main(){
    int a[100], n=0, choice, val, pos;
    do {
        cout<<"\n1. Input Array\n2. Display\n3. Insert\n4. Delete\n5. Search\n6. Exit\nChoice: ";
        cin>>choice;
        if(choice==1){
            cout<<"Size: "; cin>>n;
            for(int i=0;i<n;i++) cin>>a[i];
        } else if(choice==2){
            for(int i=0;i<n;i++) cout<<a[i]<<" "; cout<<endl;
        } else if(choice==3){
            cout<<"Position and value: "; cin>>pos>>val;
            for(int i=n;i>pos;i--) a[i]=a[i-1];
            a[pos]=val; n++;
        } else if(choice==4){
            cout<<"Position: "; cin>>pos;
            for(int i=pos;i<n-1;i++) a[i]=a[i+1];
            n--;
        } else if(choice==5){
            cout<<"Value: "; cin>>val;
            int found=0;
            for(int i=0;i<n;i++) if(a[i]==val){ cout<<"At index "<<i<<endl; found=1; break; }
            if(found==0) cout<<"Not found\n";
        }
    } while(choice!=6);
    return 0;
}
