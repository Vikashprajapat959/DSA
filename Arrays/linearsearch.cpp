#include<iostream>
using namespace std;
bool search(int arr[],int size,int key){
for(int i = 0;i<size;i++){
if(arr[i] ==key ){
return 1;
}
}
return 0;
}
int main()
{
    int arr[10]={1,2,3,-9,5,0,3,-1};
    cout<<"Enter the element of search"<<endl;
    int key;
    cin>>key;
    bool found = search(arr,10,key);
    if(found){
        cout<<"key is persent";
    }
else{
    cout<<"key is not persent";
}
}