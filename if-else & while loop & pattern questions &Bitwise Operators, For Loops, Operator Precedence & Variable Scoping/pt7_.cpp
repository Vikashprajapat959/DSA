#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
   int i = 1;
   while (i<=n)
   { 
    int j= 1;
    int values = i;
    while (j<=i)
    {
       cout<<values<<" ";
       values = values+1;
       j= j+1;
    }
    
    cout<<endl;
    i = i+1;
   }
   
    }
    
