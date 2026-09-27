#include<iostream>
#include<math.h>
#include <climits>

using namespace std;
pair<int ,int> targetarray(int arr[][2] ,int n,int m,int target){
for(int i=0;i<n;i++){
for(int j =0;j<m;j++){
    if(arr[i][j] == target){ 
      return {i,j};
        }
}
}
return{-1,-1};
}
int getminarray(int arr[][2] ,int n,int m){
    int mini = INT_MAX;
for(int i=0;i<n;i++){
for(int j =0;j<m;j++){
    mini =min(mini,arr[i][j]);
        }
}
return mini;
}
int main(){
    int arr[3][2];
for(int i =0;i<3;i++){
for(int j =0;j<2;j++){
 cin>>arr[i][j];

}
}
int ans =getminarray(arr,3,2);
cout<<ans<<endl;
//   pair<int ,int>ans=targetarray( arr,3,2,6);
//   cout<<ans.first<<" "<<ans.second<<endl;
}
