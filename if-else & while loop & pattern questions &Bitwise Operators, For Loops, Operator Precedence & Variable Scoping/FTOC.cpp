#include<iostream>
using namespace std;
int main(){
    float f =0;
    float c;
    cout << "Fahrenheit\tCelsius" << endl;
    while (f<=100)
    {
        c = (f-32)*5/9;
                cout << f << "\t\t" << c << endl;

        f = f+10;
    }
   
}