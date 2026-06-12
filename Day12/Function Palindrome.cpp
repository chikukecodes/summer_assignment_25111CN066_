#include<iostream>
using namespace std;
int isPalindrome(int n){
    int original=n, rev=0, digit;
    while(n!=0){
        digit=n%10;
        rev=rev*10+digit;
        n=n/10;
    }
    if(original==rev) return 1;
    return 0;
}
int main(){
    int n;
    cout<<"Enter number: ";
    cin>>n;
    if(isPalindrome(n)) cout<<"Palindrome"<<endl;
    else cout<<"Not Palindrome"<<endl;
    return 0;
}
