#include<iostream>
using namespace std;
//1---> prime no.
//0---> not a prime no.
bool isprime(int n){
    
for(int i =2;i<n;i++){
    if(n%i==0){
return 0;
}}
return 1;
}
int main(){
int n;
cin>>n;

if(isprime(n)){
cout<<"this is a prime no:";
}else{
cout<<"this is a not prime no:";
}
}