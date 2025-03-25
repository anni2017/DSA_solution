// merge sort code for countInversion

#include<iostream>
#include<vector>
using namespace std;

int merge(vector<int> &arr, int st, int mid, int end){
    vector<int> temp;
    int i = st, j = mid+1;
    int invCount = 0;
    while(i <= mid && j <= end){
        if(arr[i] <= arr[j]){
            temp.push_back(arr[i]);
            i++;

        }else{
            temp.push_back(arr[j]);
            invCount += (mid-i+1);
            j++;
        }
    }

    while(i <= mid){
        temp.push_back(arr[i]);
        i++;
    }
    while(j <= end)
    {
        temp.push_back(arr[j]);
        j++;
    }

    for(int idx = 0; idx<temp.size();idx++){
        arr[st+idx] = temp[idx];
    }
    return invCount;
}
int mergeSort(vector<int> &arr1, int st, int end)
{
   if(st < end){
    int mid = st + (end - st)/2;
    int LinvCount = mergeSort(arr1,st,mid);
    int RinvCount = mergeSort(arr1,mid+1,end);
    int INVcount = merge(arr1,st,mid,end);
    return LinvCount+RinvCount+INVcount;
   }

   return 0;
}
int main(){

    vector<int> arr = {6,3,5,2,7};
    int n = arr.size();
    int ans = mergeSort(arr,0,n-1);
    cout <<"invCount : " << ans;

    // for(int val : arr){
    //     cout << val << " ";
    // }
    return 0;
}