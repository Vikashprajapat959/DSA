#include <iostream>
using namespace std;

int main() {
    char ch;
    cin>>ch;
    if(ch<='a' && ch>='z'){
        cout<<ch<<" this is lowercase"<<endl;
    }
else if(ch<='A' && ch>='B'){
        cout<<ch <<" this is upercase"<<endl;
    }
else if(ch<='1' && ch>='9'){
        cout<<ch <<" this is numeric"<<endl;
    }
    else{
cout<<ch <<" this special character"<<endl;
    }
    return 0;
}