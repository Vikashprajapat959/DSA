#include<iostream>
using namespace std;
int sumofarrayelements(int arr[],int n){
    int sum =0;
 for(int i=0; i<n; i++)
    {
       cin>>arr[i];
        sum = sum +arr[i];
    }
    return sum;
}
int main()
{
    int size;
    cin >> size;

    int num[100];
    
cout<<"sum of array elements:"<<sumofarrayelements(num,size)<<endl;
    return 0;
}