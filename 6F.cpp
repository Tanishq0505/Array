
// Kadane's Algorithm (GFG) / 53 Maximum subarray (LEET CODE)

// TC O(n)

// Example 1:

// Input:
// N = 5
// Arr[] = {1,2,3,-2,5}
// Output:
// 9
// Explanation:
// Max subarray sum is 9
// of elements (1, 2, 3, -2, 5) which
// is a contiguous subarray.

// https://youtu.be/w4W6yya1PIc
// you can see copy also
#include <iostream>
using namespace std;
int maxSubArray(int arr[], int n)
{
    int sum = 0;
    int maxi = arr[0];
    for (int i = 0; i < n; i++)
    {
        sum = sum + arr[i];

        maxi = max(maxi, sum);
        // alternative of max function
        // if(sum>maxi){
        //     maxi=sum;
        // }
        if (sum < 0)
        {
            sum = 0;
        }
    }
    return maxi;
}
int main()
{
    int arr[] = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
    int n = sizeof(arr) / sizeof(arr[0]);

    // Printing initial array
    cout << "Given array is \n";
    for (int i = 0; i < n; i++)
        cout << arr[i] << ' ';
    cout << endl;
    cout << "The sum is"
         << " " << maxSubArray(arr, n) << endl;
}
