

#include<iostream>
#include<limits.h>
using namespace std;

void trapWater(int *arr, int n)
{
    int leftMax[20000], rightMax[20000];
    leftMax[0] = arr[0];
    rightMax[n-1] = arr[n-1];
    //cout  << leftMax[0] << ",";
    for(int i = 1;i<n;i++)
    {
        leftMax[i] = max(leftMax[i-1],arr[i-1]);
        //cout << leftMax[i] << ",";
    }
    //cout << endl;
     //cout << rightMax[n-1];
    for(int i = n-2;i >= 0;i--)
    {
        rightMax[i] = max(rightMax[i+1],arr[i+1]);
        //cout << rightMax[i] << ",";
    }

    int waterTrapped = 0;
    for(int i=0;i<n;i++)
    {
        int currwater = min(leftMax[i],rightMax[i]) - arr[i];
        
        if(currwater > 0)
        {
            waterTrapped += currwater;
        }
    }
    
    
   cout << "maximum water trapped : " << waterTrapped;


}

int main()
{

    int heights[] = {8,7,5,4,3};
    int n = sizeof(heights)/sizeof(int);
    trapWater(heights,n);

    return 0;
}
