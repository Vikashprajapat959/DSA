#include <iostream>
using namespace std;

void print(int arr[], int size, int index) {
    if (index >= size) {
        return;
    }
    cout << arr[index] << " ";

    print(arr, size, index + 1);
}
void reverseprint(int *arr,int size){
    if(size==0){
   return;  
    }
     cout << arr[size-1] << " ";

    reverseprint(arr,size - 1);
}
void searh(int arr[],int size,int index,int target){
    if(index>=size){
        return -1;
    }
    if(arr[index]==target){
        return index;
    }
   int results= search(arr,size,index+1,target);
    return results;
}
int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int size = 5;
    int index = 0;

    print(arr, size, index);
    cout<<endl;
    reverseprint(arr, size);
    int target =50;
    int resulrt = search(arr,size,index,target);
}