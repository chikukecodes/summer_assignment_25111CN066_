#include<iostream>
using namespace std;
int main(){
    int n, a[100], sum=0;
    cout<<"Enter size: ";
    cin>>n;
    for(int i=0;i<n;i++) cin>>a[i];
    for(int i=0;i<n;i++) sum=sum+a[i];
    cout<<"Sum = "<<sum<<endl;
    cout<<"Average = "<<(float)sum/n<<endl;
    return 0;
}
