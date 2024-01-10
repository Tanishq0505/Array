// Largest row sum problem
// Input-
//  1 2 3
// 4 5 6
// 7 8 9
// Printing the array
// 1 2 3 =6
// 4 5 6=15
// 7 8 9=24
// Printing Sum ->
// 6 15 24
// the maximum row sum is 24
// Row no is 2

#include <iostream>
using namespace std;
// to print row wise sum
// https://youtu.be/1CdolnvxLs0?list=PLDzeHZWIZsTryvtXdMr6rPh4IDexB5NIA
// watch from 32 min
void printSum(int arr[][3], int row, int col)
{
    cout << "Printing Sum -> " << endl;
    for (int row = 0; row < 3; row++)
    {
        int sum = 0;
        for (int col = 0; col < 3; col++)
        {
            sum += arr[row][col];
        }
        cout << sum << " ";
    }

    cout << endl;
}
int largestRowSum(int arr[][3], int row, int col)
{

    int maxi = 0;
    int rowIndex = -1;

    for (int row = 0; row < 3; row++)
    {
        int sum = 0;
        for (int col = 0; col < 3; col++)
        {
            sum += arr[row][col];
        }

        if (sum > maxi)
        {
            maxi = sum;
            rowIndex = row;
        }
    }

    cout << "the maximum sum is " << maxi << endl;
    return rowIndex;
}
int main()
{

    // create 2 d array
    int arr[3][3];
    cout << "Enter the elements " << endl;
    // taking input -> row wise input
    for (int row = 0; row < 3; row++)
    {
        for (int col = 0; col < 3; col++)
        {
            cin >> arr[row][col];
        }
    }
    cout << "Printing the array " << endl;
    // print
    for (int row = 0; row < 3; row++)
    {
        for (int col = 0; col < 3; col++)
        {
            cout << arr[row][col] << " ";
        }
        cout << endl;
    }
    cout << largestRowSum(arr, 3, 3);

    return 0;
}