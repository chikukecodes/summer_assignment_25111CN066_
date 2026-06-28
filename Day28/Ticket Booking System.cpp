#include<iostream>
#include<string.h>
using namespace std;
int main(){
    char movies[3][50]={"Movie A","Movie B","Movie C"};
    int seats[3]={10,10,10};
    int choice, num;
    cout<<"Available Movies:\n";
    for(int i=0;i<3;i++) cout<<i+1<<". "<<movies[i]<<" (Seats: "<<seats[i]<<")\n";
    cout<<"Select movie (1-3): "; cin>>choice; choice--;
    if(choice<0||choice>2){ cout<<"Invalid choice\n"; return 0; }
    cout<<"Enter tickets: "; cin>>num;
    if(num>seats[choice]) cout<<"Not enough seats\n";
    else {
        seats[choice]-=num;
        cout<<"Booked "<<num<<" tickets for "<<movies[choice]<<endl;
        cout<<"Remaining seats: "<<seats[choice]<<endl;
    }
    return 0;
}
