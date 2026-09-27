#include<iostream>
#include<vector>
using namespace std;
int main(){
//creation
vector<int>marks;
marks.push_back(20);
marks.push_back(30);
marks.push_back(40);
marks.push_back(50);
cout<<"size:"<<marks.size()<<endl;
marks.pop_back();
cout<<"size:"<<marks.size()<<endl;
if(marks.empty() == true){
    cout<<"vector is empty"<<endl;

}
else{
    cout<<"vector is not empty"<<endl;
}
// cout<<marks.front()<<endl;
// cout<<marks.back()<<endl;

//cout<<*(marks.begin())<<endl;
return 0;
}