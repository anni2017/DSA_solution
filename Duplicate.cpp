/* Given an integer array nums, return true if any value appears at least
 twice in the array, and return false if every element is distinct. */

#include<iostream>
#include<algorithm>
using namespace std;

bool isDuplicate(int arr[], int n)
{
    sort(arr,arr + n);
    for(int i=1;i<n;i++)
    {
        if(arr[i] == arr[i-1])
        {
            return true;
        }
          
    }

    return false;
}
int main()
{
    int arr[] = {1,2,4,5,6,};
   
    int n = sizeof(arr)/sizeof(int);

    cout << isDuplicate(arr,n);
    return 0;
}