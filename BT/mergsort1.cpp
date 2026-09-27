#include<iostream>
#include<vector>
#include<string>
#include<limits.h>
using namespace std;
void merge(int arr[],int start,int end,int mid){
    int leftarray = mid-start+1;
    int righarray = end-mid;
   int* arr1 = new int[leftarray];
int* arr2 = new int[righarray];

    int maxarrayindex =start;
    for(int i = 0;i<leftarray;i++){
        arr1[i] = arr[maxarrayindex];
        maxarrayindex++;
    }
    for(int i = 0;i<righarray;i++){
        arr2[i] = arr[maxarrayindex];
        maxarrayindex++;
    }
    int i =0;
    int j =0;
    maxarrayindex =start;
    while(i<leftarray && j<righarray)
    {
        if(arr1[i]<arr2[j]){
            arr[maxarrayindex] = arr1[i];
            i++;
            maxarrayindex++;
        }
        else{
            arr[maxarrayindex] = arr2[j];
            j++;
            maxarrayindex++;
        }
    }
    while (i<leftarray)
    {
         arr[maxarrayindex] = arr1[i];
            i++;
            maxarrayindex++;
    }
    while (j<righarray)
    {
         arr[maxarrayindex] = arr2[j];
            j++;
            maxarrayindex++;
    }
    delete[] arr1;
    delete[] arr2;
    
}
void mergesort(int arr[],int start,int end){
  //  base case
if(start>=end){
return ;
}
int mid = (start+end)/2;
mergesort(arr,start,mid);
mergesort(arr,mid+1,end);
merge(arr,start,end,mid);
}
int main(){
    int arr[]= {2,4,3,6,12,6};
    int size = 6;
    int start  = 0;
    int end = size-1;
    mergesort(arr,start,end);
  cout << "Sorted array: ";

for(int i = 0; i < size; i++){
    cout << arr[i] << " ";
}
}