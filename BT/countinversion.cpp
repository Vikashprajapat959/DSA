#include <iostream>
using namespace std;

long long merge(int arr[], int start, int end, int mid)
{
    int leftarray = mid - start + 1;
    int rightarray = end - mid;

    int* arr1 = new int[leftarray];
    int* arr2 = new int[rightarray];
 
    int index = start;

    // Copy left array
    for(int i = 0; i < leftarray; i++)
    {
        arr1[i] = arr[index];
        index++;
    }

    // Copy right array
    for(int i = 0; i < rightarray; i++)
    {
        arr2[i] = arr[index];
        index++;
    }

    int i = 0;
    int j = 0;

    index = start;

    long long count = 0;

    // Merge + count inversion
    while(i < leftarray && j < rightarray)
    {
        if(arr1[i] <= arr2[j])
        {
            arr[index] = arr1[i];
            i++;
        }
        else
        {
            arr[index] = arr2[j];
            j++;

            // Count inversions
            count += leftarray - i;
        }

        index++;
    }

    // Remaining left elements
    while(i < leftarray)
    {
        arr[index] = arr1[i];
        i++;
        index++;
    }

    // Remaining right elements
    while(j < rightarray)
    {
        arr[index] = arr2[j];
        j++;
        index++;
    }

    delete[] arr1;
    delete[] arr2;

    return count;
}

long long mergesort(int arr[], int start, int end)
{
    if(start >= end)
    {
        return 0;
    }

    int mid = (start + end) / 2;

    long long leftCount = mergesort(arr, start, mid);

    long long rightCount = mergesort(arr, mid + 1, end);

    long long mergeCount = merge(arr, start, end, mid);

    return leftCount + rightCount + mergeCount;
}

int main()
{
    int arr[] = {2, 4, 3, 6, 12, 6};

    int size = 6;

    long long inversions = mergesort(arr, 0, size - 1);

    cout << "Sorted array: ";

    for(int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }

    cout << endl;

    cout << "Total inversions: " << inversions << endl;

    return 0;
}