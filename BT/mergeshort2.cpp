#include<iostream>
#include<vector>
#include<string>
#include<limits.h>
using namespace std;
void merge(int arr[],int start,int end,int mid){
    int leftArray = mid-start+1;
    int rightarray = end-mid;
    int* arr1 = new int[leftArray];
    int* arr2 = new int[rightarray];
    int maxArrayIndex = start;
    for(int i =0;i<leftArray;i++){
        arr1[i] = arr[maxArrayIndex];
        maxArrayIndex++;
    }
       maxArrayIndex = mid+1;
     for(int i =0;i<rightarray;i++){
        arr2[i] = arr[maxArrayIndex];
        maxArrayIndex++;
    }
    int i =0;
    int j = 0;
      maxArrayIndex = start;
    while(i<leftArray && j<rightarray){
        if(arr1[i]<arr2[j]){
            arr[maxArrayIndex] = arr1[i];
            i++;
            maxArrayIndex++;
        }
        else{
            arr[maxArrayIndex] = arr2[j];
            j++;
             maxArrayIndex++;
        }
    }
    while (i<leftArray){
         arr[maxArrayIndex] = arr1[i];
            i++;
            maxArrayIndex++;
    }
    while(j<rightarray){
        arr[maxArrayIndex] = arr2[j];
            j++;
             maxArrayIndex++;
    }  
    delete[] arr1;
    delete[] arr2;
}

void megeshort(int arr[],int start,int end){
    //base cases
    if(start>=end){
return;
    }
    int mid = (start+end)/2;
    megeshort(arr,start,mid);
    megeshort(arr,mid+1,end);
    merge(arr,start,end,mid);
}
int main(){
    int arr[] = {2,9,4,6,0,5,};
    int size = 6;
    int start = 0;
    int end = size-1;
    megeshort(arr,start,end);
   cout << "Sorted array: ";

for(int i = 0; i < size; i++){
    cout << arr[i] << " ";
}
}