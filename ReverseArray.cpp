//WAP to reverse the array by using extra space;

#include<iostream>
using namespace std;

int main()
{
    int arr[] = {4,6,7,8,2,4,5,56,6};
    int n = sizeof(arr)/sizeof(int);

    int copy[n];

    for(int i = 0;i<n;i++)
    {
        int j = n-i-1;
        copy[i] = arr[j];  // copy the elements from og array

    }

    for(int i = 0;i<n;i++)
    {

          arr[i] = copy[i] ; // override copy array into og array
    }

    for(int i = 0;i<n;i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}