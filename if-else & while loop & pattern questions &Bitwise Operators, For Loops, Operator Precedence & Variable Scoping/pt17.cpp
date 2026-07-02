#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int i= 1;
    while (i<=n)
    {
        int j = 1;
        char star = 'A'+i-1;
        while (j<=n)
        {
     cout<<star<<" ";
     star = star+1;
     j= j+1;
        }  
       cout<<endl;
       i= i+1;
    }
    
}