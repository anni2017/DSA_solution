//WAP to reverse the array without extra space;

#include<iostream>
using namespace std;

void reverseArray(int *arr, int n, int low, int high)
{
    //int low = 0, high = n-1;
    while(low < high)
    {
        int t = arr[low];
        arr[low] = arr[high];
        arr[high] = t;
        low++;
        high--;
    }

}

void printArray(int *arr, int n)
{
    for(int i = 0;i<n;i++)
    {
        cout << arr[i] << " ";
    }
}
int main()
{
    int arr[] = {4,6,7,8,2,4,5,56,6};
    int n = sizeof(arr)/sizeof(int);
    int low = 0, high = n-1;

    reverseArray(arr, n, low, high);
    printArray(arr,n);
    return 0;
}