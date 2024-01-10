// Search a 2D Matrix II Leet code
// Write an efficient algorithm that searches for a value target in an m x n integer matrix matrix.
// This matrix has the following properties:
// Integers in each row are sorted in ascending from left to right.
// Integers in each column are sorted in ascending from top to bottom.

// Input: matrix = [[1,4,7,11,15],[2,5,8,12,19],[3,6,9,16,22],[10,13,14,17,24],[18,21,23,26,30]], target = 5
// Output: true
#include <iostream>
#include <vector>
using namespace std;
// https://youtu.be/1CdolnvxLs0?list=PLDzeHZWIZsTryvtXdMr6rPh4IDexB5NIA
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
    int row = n;
    int col = m;

    int rowIndex = 0;
    int colIndex = col - 1;

    while (rowIndex < row && colIndex >= 0)
    {
        int element = arr[rowIndex][colIndex];

        if (element == target)
        {
            cout << "Found";
        }

        if (element < target)
        {
            rowIndex++;
        }
        else
        {
            colIndex--;
        }
    }
    return 0;
}
