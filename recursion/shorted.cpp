#include <iostream>
using namespace std;

bool sort(int arr[], int size, int index) {

    if (index == 0) {
        return true;
    }

    if (arr[index] < arr[index - 1]) {
        return false;
    }
else{ 
    bool ans = sort(arr,size, index - 1);

    return ans;
}
}
int main() {

    int arr[] = {10, 20, 30,40,5};

    int size = 5;
    int index = size-1;

    bool ans = sort(arr, size,index);

    cout <<"sorted  or not:"<< ans<<endl;

    return 0;
}