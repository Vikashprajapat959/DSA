#include <iostream>
using namespace std;

// Function to count set bits
int setBits(int n)
{
    int count = 0;

    while (n != 0)
    {
        if (n & 1)
        {
            count++;
        }

        n = n >> 1;
    }

    return count;
}

int main()
{
    int a, b;
    cin >> a >> b;

    int ans = setBits(a) + setBits(b);

    cout << ans;

    return 0;
}