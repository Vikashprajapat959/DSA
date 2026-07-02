#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int row = 1;
    while (row<=n)
    {
        int columan=1;
        while (columan<=row)
        {
            cout<<row<<" ";
            columan= columan+1;
        } 
        cout<<endl;
        row= row+1;
    }
    
}