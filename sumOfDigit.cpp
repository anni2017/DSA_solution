// WAP to calculate the sum of digits

#include<iostream>
using namespace std;
int main()
{
    int n = 31829;
    int sum = 0;
    while(n > 0)
    {
        int dig = n%10;
        if(dig%2 != 0)
        {
           sum+=dig;
        }
        
        n = n/10;
    }

    cout << "sum is : " << sum << endl;
}