#include<iostream>
using namespace std;
int main(){
    int n ;
    cin>>n;
    int i = 1;
    char value = 'A';
    while(i<=n){
        int j = 1; 
        while(j<=n){
       cout<<value;
       value = value +1;
       j++;
        }
        cout<<endl;
        i++;
    }
}