// WAP to find the maximum subarray sum -> Brute force approach

#include<iostream>
#include<limits.h>
using namespace std;

void subarraySum(int *arr, int n)
{
    int maxSum = INT_MIN;
    for(int start = 0;start<n;start++){
        
        for(int end = start;end<n;end++){
            int sum = 0;
           for(int i = start;i <= end;i++)
           {
               sum+=arr[i];
               
           }
           cout << sum;
           maxSum = max(sum,maxSum);
           cout << ",";
           
    }
    
    cout << endl;
  }
   cout << "maximum subarray sum is : " << maxSum;
}

int main()
{

    int arr[] = {4,5,6,7,1};
    int n = sizeof(arr)/sizeof(int);
    subarraySum(arr, n);


    return 0;
}