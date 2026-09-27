#include<iostream>
#include<vector>
using namespace std;
void printpairs( vector<int>arr){
    int n = arr.size();
    for(int i=0;i<n;i++){
    for(int j=i+1;j<n;j++){
        for(int k=j+1;k<n;k++){
        cout<<"("<<arr[i]<<", "<<arr[j]<<","<<arr[k]<<")";
    }
}}
}

int main() { 
	vector<int>arr;
	arr.push_back(10);
	arr.push_back(20);
	arr.push_back(30);
	arr.push_back(40);
	//	arr.push_back(50);
//fill(arr.begin(),arr.begin()+1,5);
 printpairs(arr);
}