// WAP to find the duplicate lement in the gvien array 
//using optimized approach i.e slow-fast pointer approach

#include<iostream>
#include<vector>
using namespace std;

int findDuplicate(vector<int> &arr)
{
    int slow = arr[0], fast = arr[0];
    

    do{
        slow = arr[slow]; // slow + 1
        fast = arr[arr[fast]]; // fast + 2
    }while(slow != fast);

    slow = arr[0];
    while(slow !=fast)
    {
        slow = arr[slow]; // slow + 1
        fast = arr[fast]; // fast + 1
        return slow;
        
    }

  return -1;
}
int main()
{
   vector<int> arr = {1,2,3,2};

   int ans = findDuplicate(arr);
   cout << ans;
   return 0;
}