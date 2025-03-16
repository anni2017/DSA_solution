

#include<iostream>
using namespace std;

int helperFunc(int arr[],int n,int st,int end,int tar){

    if(st > end) return -1; // base case
        int mid = st + (end - st)/2;
        if(arr[mid] == tar) return mid;
        else if(arr[mid] <= tar){
            return helperFunc(arr,n,mid+1,end,tar);
        }
        else if(arr[mid] >= tar){
            return helperFunc(arr,n,st,mid-1,tar);
        }

    
    
}


int main()
{
    int arr[] = {1,2,3,4,5,6,7};
    int n = sizeof(arr)/sizeof(int);
    cout << helperFunc(arr,n,0,n-1,7);
    return 0;
}