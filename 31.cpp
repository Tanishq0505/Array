// Search a 2D Matrix I  Leet code
// You are given an m x n integer matrix matrix with the following two properties:
// Each row is sorted in non-decreasing order.
// The first integer of each row is greater than the last integer of the previous row.
// Given an integer target, return true if target is in matrix or false otherwise.
// You must write a solution in O(log(m * n)) time complexity.

// Input: matrix = [[1,3,5,7],[10,11,16,20],[23,30,34,60]], target = 3
// Output: true
#include <iostream>
#include <array>
using namespace std;
// https://youtu.be/1CdolnvxLs0?list=PLDzeHZWIZsTryvtXdMr6rPh4IDexB5NIA
// 1 hour 2 min
int main()
{
    int target;
    cout << "enter target element" << endl;
    cin >> target;
    int n, m;
    cout << "enter no of row of array" << endl;
    cin >> n;
    cout << "enter no of column array" << endl;
    cin >> m;
    int arr[n][m];
    cout << "Enter the elements " << endl;
    // taking input -> row wise input
    for (int rows = 0; rows < n; rows++)
    {
        for (int col = 0; col < m; col++)
        {
            cin >> arr[rows][col];
        }
    }
    cout << "Printing the array " << endl;
    // print
    for (int rows = 0; rows < n; rows++)
    {
        for (int col = 0; col < m; col++)
        {
            cout << arr[rows][col] << " ";
        }
        cout << endl;
    }

    int start = 0;
    int end = n * m - 1;

    int mid = start + (end - start) / 2;

    while (start <= end)
    {

        int element = arr[mid / m][mid % m];

        if (element == target)
        {
            cout << "Found";
        }

        if (element < target)
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
        mid = start + (end - start) / 2;
    }
    return 0;
}
