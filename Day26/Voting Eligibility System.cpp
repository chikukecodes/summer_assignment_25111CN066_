#include<iostream>
using namespace std;
int main(){
    int age;
    char name[50];
    cout<<"Enter name: ";
    cin>>name;
    cout<<"Enter age: ";
    cin>>age;
    if(age>=18) cout<<name<<" is eligible to vote."<<endl;
    else cout<<name<<" is not eligible to vote."<<endl;
    return 0;
}
