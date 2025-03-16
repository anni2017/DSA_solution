

#include<iostream>
#include<vector>
using namespace std;


int count(int arr[],int num,int low,int high){

    int count = 0;
    for(int i = low;i<=high;i++){
        if(arr[i] == num) count++;
    }

    return count;
}

int majorityElement(int arr[],int low,int high){

    if(low == high){
        return arr[low];
    }
    int mid = low + (high - low)/2;
    int left = majorityElement(arr,low,mid);
    int right = majorityElement(arr,mid+1,high);

    if(left == right){
         return left;
    }

    int leftCount = count(arr,left,low,mid);
    int rightCount = count(arr,right,mid+1,high);

    return leftCount > rightCount ? left:right;

}

// int majority(int arr[],int n)
// {
//     return majorityElement(arr,0,n-1);
// }
int main(){

    int arr[] = {2,2,1,1,1,1,2};
    int n = sizeof(arr)/sizeof(int);
    cout << majorityElement(arr,0,n-1);
    return 0;
}