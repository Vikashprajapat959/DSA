#include<iostream>
using namespace std;
int main(){
    int a,b;
    cout<<"enter number of a:"<<endl;
    cin>>a;
     cout<<"enter number of b:"<<endl;
    cin>>b;
    char op;
    cout<<"enter the opration you went to perform"<<op<<endl;
    cin>>op;
    switch (op)
    {
    case '+':cout<<a+b;

        break;
         case '-':cout<<a-b;
    break;
    case '*':cout<<a*b;
    break;
    case '/':cout<<a/b;
    break;
    default:cout<<"please enter valid opration please"<<endl;
        break;
    }
}