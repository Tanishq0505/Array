// Row wise sum problem
// Example
// Input-
//    1 2 3
//    4 5 6
//    7 8 9
// Printing the array
// 1 2 3 =6
// 4 5 6=15
// 7 8 9=24
// Printing Sum ->
// 6 15 24

#include <iostream>
using namespace std;
// https://youtu.be/1CdolnvxLs0?list=PLDzeHZWIZsTryvtXdMr6rPh4IDexB5NIA
// watch from 32 min
// to print row wise sum
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
    printSum(arr, 3, 3);
    return 0;
}