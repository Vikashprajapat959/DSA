#include<iostream>
using namespace std;
bool iseven(int a){
if(a&1){
    return 0;

}
else{
    return 1;
}
}
int main(){
int num;
cout<<"Enter  number"<<endl;
cin>>num;
if(iseven(num)){
    cout<<"this is a even number"<<endl;
}
else{
    cout<<"this number is a odd"<<endl;
}
}