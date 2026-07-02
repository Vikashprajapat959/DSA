#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    long long int n;
    cin >> n;

    unsigned long long int i = 0, ans = 0;

    // Negative number ko 16-bit me convert karo
    if (n < 0)
    {
        n = pow(2, 16) + n;
    }

    cout << n << endl;

    while (n)
    {
        int lastBit = n & 1;

        ans = (pow(10, i) * lastBit) + ans;

        n = n >> 1;

        i++;

        cout << ans << endl;   // Har step ka answer print hoga
    }

    cout << "Final Binary = " << ans << endl;

    return 0;
}