// Leet code Spiral Matrix
// Given an m x n matrix, return all elements of the matrix in spiral order.

// Input: matrix = [[1,2,3],[4,5,6],[7,8,9]]
// Output: [1,2,3,6,9,8,7,4,5]
#include <iostream>
#include <array>

using namespace std;
// https://youtu.be/1CdolnvxLs0?list=PLDzeHZWIZsTryvtXdMr6rPh4IDexB5NIA
// 46 min
void spiralOrder(int matrix[][3], int row, int col)
{

    int ans[9];
    // int row = matrix.size();
    // int col = matrix[0].size();

    int count = 0;
    int total = row * col;
    int h = 0;
    // index initialisation
    int startingRow = 0;
    int startingCol = 0;
    int endingRow = row - 1;
    int endingCol = col - 1;

    while (count < total)
    {

        // print starting row
        for (int index = startingCol; count < total && index <= endingCol; index++)
        {
            ans[h] = matrix[startingRow][index];
            h++;
            count++;
        }
        startingRow++;

        // print ending column
        for (int index = startingRow; count < total && index <= endingRow; index++)
        {
            ans[h] = matrix[index][endingCol];
            h++;
            count++;
        }
        endingCol--;

        // print ending row
        for (int index = endingCol; count < total && index >= startingCol; index--)
        {
            ans[h] = matrix[endingRow][index];
            h++;
            count++;
        }
        endingRow--;

        // print starting column
        for (int index = endingRow;
             count < total && index >= startingRow; index--)
        {
            ans[h] = matrix[index][startingCol];
            h++;
            count++;
        }
        startingCol++;
    }

    cout << "The array is: ";
    for (auto i : ans)
    {
        cout << i << " ";
    }
}
int main()
{

    int arr[3][3];
    cout << "Enter the elements " << endl;
    // taking input -> row wise input
    for (int rows = 0; rows < 3; rows++)
    {
        for (int col = 0; col < 3; col++)
        {
            cin >> arr[rows][col];
        }
    }
    cout << "Printing the array " << endl;
    // print
    for (int rows = 0; rows < 3; rows++)
    {
        for (int col = 0; col < 3; col++)
        {
            cout << arr[rows][col] << " ";
        }
        cout << endl;
    }
    spiralOrder(arr, 3, 3);
    return 0;
}