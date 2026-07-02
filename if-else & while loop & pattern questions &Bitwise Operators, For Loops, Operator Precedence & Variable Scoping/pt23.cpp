#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int i = 1;

    while (i <= n) {

        // print leading spaces
        int space = i - 1;
        while (space) {
            cout << "  ";
            space = space-1;
        }

        // print numbers
        int j = i;
        while (j <= n) {
            cout << j << " ";
            j++;
        }

        cout << endl;
        i++;
    }

    return 0;
}