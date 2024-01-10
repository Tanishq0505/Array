// Peak index in Mountain array (LEET CODE)
// Example 1:
// Input: arr = [0,1,0]
// Output: 1
// Example 2:
// Input: arr = [0,2,1,0]
// Output: 1

#include <iostream>
using namespace std;
// time span 25 : 00 -38:00
// https://youtu.be/zD2Jg3alZV8?list=PLDzeHZWIZsTryvtXdMr6rPh4IDexB5NIA
int find(int v[], int n)
{
    int s = 0;
    int e = n - 1;
    int mid = (s + e) / 2;
    while (s < e)
    {
        if (v[mid] < v[mid + 1])
            s = mid + 1;
        else
            e = mid;

        mid = (s + e) / 2;
    }
    return s;
}
int main()
{
    // n is size of array
    int n = 7;
    int v[7] = {0, 1, 2, 3, 2, 1, 0};
    cout << find(v, 7);
}