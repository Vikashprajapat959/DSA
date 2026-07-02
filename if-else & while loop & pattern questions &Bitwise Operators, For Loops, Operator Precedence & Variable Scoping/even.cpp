#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter number:"<<endl;
    cin>>n;
    int i = 2;
    int sum = 0;
    while (i<=n)
    {
       // cout<<"even number:"<<endl;
        cout<<i<<endl;
        sum = sum +i;
        i = i+2;
    }
    cout<<"sum of even number:"<<sum<<endl;  
}