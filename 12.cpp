// Square root using Binary Search(LEET CODE,GFG,Code studio)
//  Given a non-negative integer x, return the square root of x rounded down
// to the nearest integer. The returned integer should be non-negative as well.
// You must not use any built-in exponent function or operator.
// Example 1:
// Input: x = 8
// Output: 2
// Explanation: The square root of 8 is 2.82842..., and since we round it down to
// the nearest integer, 2 is returned

#include <iostream>
using namespace std;
// time span 28:41-43:15
// https://youtu.be/6z2HK4o8qcU?list=PLDzeHZWIZsTryvtXdMr6rPh4IDexB5NIA
long long int sqrtInteger(int n)
{

    int s = 0;
    int e = n;
    long long int mid = s + (e - s) / 2;

    long long int ans = -1;
    while (s <= e)
    {

        long long int square = mid * mid;

        if (square == n)
            return mid;

        if (square < n)
        {
            ans = mid;
            s = mid + 1;
        }
        else
        {
            e = mid - 1;
        }
        mid = s + (e - s) / 2;
    }
    return ans;
}

int main()
{
    int n;
    cout << " Enter the number " << endl;
    cin >> n;
    cout << "The sqrt of an integer is " << sqrtInteger(n) << endl;
    return 0;
}