#include<iostream>
using namespace std;
//Function Signature
void  counting(int n){
   //function body
    for(int i =0;i<=n;i++){
    cout<<i<<" "; 
    }
    cout<<endl;
}
int main(){
    int n;
    cin>>n;
   // Function Call
      counting(n);
return 0;
}