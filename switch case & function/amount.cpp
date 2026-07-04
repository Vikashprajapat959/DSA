#include<iostream>
using namespace std;
int main(){
    int amount;
    cout<<"Enter your amount is:"<<endl;
    cin>>amount;
    int note100=0,note50=0,note20=0,note1=0;
    switch (1)
    {
    case 1:
    note100= amount/100;
    amount= amount%100;
      
         case 2:
    note50= amount/50;
    amount= amount%50;
       
         case 3:
    note20= amount/20;
    amount= amount%20;
      
      case 4:
    note1= amount/1;
    amount= amount%1;
        break;
    
       
    }
     cout << "100 Notes = " << note100 << endl;
    cout << "50 Notes = " << note50 << endl;
    cout << "20 Notes = " << note20 << endl;
    cout << "1 Notes = " << note1 << endl;
}