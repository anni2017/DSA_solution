// WAP to find the maximum subarray sum -> optimied approach kadane's algo based on DP
#include <iostream>
#include <climits>
using namespace std;

void maxsubarraySum(int *arr, int n)
{
    int currSum = 0;
    int maxSum = INT_MIN;

    for(int i = 0; i<n; i++)
    {
        currSum += arr[i];
        maxSum = max(maxSum, currSum);
        if(currSum < 0) // maxsum is -ive then 
        {
            currSum = 0; // reinitilaize currsum to 0;
        }

    }

    cout << "maximum sum is : " << maxSum << endl;
}
int main()
{
    int arr[] = {-1,-2,-3,-4};
    int n = sizeof(arr)/sizeof(int);
    maxsubarraySum(arr, n);

    return 0;
}