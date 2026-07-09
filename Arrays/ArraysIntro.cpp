#include<iostream>
using namespace std;
void PrintArray(int arr[],int size){
    cout<<"print the array"<<endl;
     for(int i=0;i<size;i++){
 cout<< arr[i]<<" ";
}
      cout<<"printing DONE"<<endl;
}
int main(){
    //declare 
    int number[15];
    //accesing in array
    cout<<"value at 15 index "<< number[1]<<endl;
       // cout<<"value at 20 index "<< number[20]<<endl;
       //initialising array
       int second[3] = {5,7,11};
 cout<<"value at 2 index "<< second[2]<<endl;
 int third[15]={2,7};
 int n = 15;
 PrintArray(third,15);
int fourth[10] = {0};
  PrintArray(fourth,15);
int fifth[10] = {1};
 PrintArray(fifth,15);
 int fifthesize = sizeof(fifth)/sizeof(int);
cout<<"sizeof fifth is:"<<fifthesize<<endl;
int thirdsize = sizeof(third)/sizeof(int);
cout<<"sizeof fifth is:"<<thirdsize<<endl;
char ch[5] = {'a','b','c','d','p'};
cout<<ch[3];
cout<<"print the array"<<endl;
     for(int i=0;i<5;i++){
 cout<< ch[i]<<" ";
}
 cout<<"printing DONE"<<endl;
 double firstDouble[6];
  float firstfloat[6];
  bool firstbool[6];

    cout<<endl<<"Everythink is fine"<<endl<<endl;
    return 0;
    }
