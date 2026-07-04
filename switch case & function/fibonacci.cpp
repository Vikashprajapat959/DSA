#include <iostream>
using namespace std;

int fibonacci(int n) {
    if (n == 1)
        return 0;
    if (n == 2)
        return 1;

    int a = 0, b = 1;

    for (int i = 3; i <= n; i++) {
        int c = a + b;
        a = b;
        b = c;
    }

    return b;
}

int main() {
    int n;
    cin >> n;

    cout << fibonacci(n);

    return 0;
}