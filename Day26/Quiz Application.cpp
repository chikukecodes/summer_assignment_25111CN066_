#include<iostream>
using namespace std;
int main(){
    int score=0, ans;
    cout<<"Quiz - Answer with option number\n";
    cout<<"Q1. What is 2+2?\n1. 3\n2. 4\n3. 5\nAnswer: ";
    cin>>ans; if(ans==2) { cout<<"Correct!\n"; score++; } else cout<<"Wrong!\n";
    cout<<"Q2. Capital of India?\n1. Mumbai\n2. Delhi\n3. Chennai\nAnswer: ";
    cin>>ans; if(ans==2) { cout<<"Correct!\n"; score++; } else cout<<"Wrong!\n";
    cout<<"Q3. 10*10=?\n1. 100\n2. 110\n3. 1000\nAnswer: ";
    cin>>ans; if(ans==1) { cout<<"Correct!\n"; score++; } else cout<<"Wrong!\n";
    cout<<"Score = "<<score<<"/3"<<endl;
    return 0;
}
