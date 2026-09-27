#include <iostream>
using namespace std;
// void printarray(int arr[][2],int rowsize,int columnsize){
// for(int row=0;row<rowsize;row++){
//     for(int column=0;column<columnsize;column++ ){
//         cout<<arr[row][column]<<" ";
//     }
//     cout<<endl;
// }
// }
void printarray(int arr[][2],int rowsize,int columnsize){
for(int row=0;row<rowsize;row++){
    for(int column=0;column<columnsize;column++ ){
        cout<<arr[column][row]<<" ";
    }
    cout<<endl;
}
}
void  printrowwisesum(int arr[][2],int n,int m){
    for(int row=0;row<n;row++){
        int sum=0;
        for(int column=0;column<m;column++){
            sum = sum + arr[row][column];
        }
         cout<< sum <<endl;

    }

}
void printcolumnwisesum(int arr[][2],int n,int m){
  for(int column =0;column<m;column++){
int sum = 0;
for(int row =0;row<n;row++){
    sum =sum+arr[row][column];
}
cout<<sum<<endl;
  }

}

void printcolumn(int arr[][2],int rowsize,int columnsize){
for(int column=0;column<columnsize;column++){
    for(int row=0;row<rowsize;row++ ){
        cout<<arr[row][column]<<" ";
    }
    cout<<endl;
}
}
int main()
{
//   int arr[3][2] ={{1,2},{3,4},{5,6}};
// cout<<arr[0][0];
int arr[3][2];
for(int i=0;i<3;i++){
    for(int j=0;j<2;j++){
        cin>>arr[i][j];
    }

}
printcolumn(arr,3,2);
 printcolumnwisesum( arr ,3,2);
 //printcolumn(arr ,3,2);

    return 0;
}