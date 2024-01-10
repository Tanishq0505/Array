// column  wise sum problem
// Ex
// Input-
//    1 2 3
//    4 5 6
//    7 8 9
// Printing the array
// 1 2 3
// 4 5 6
// 7 8 9
// 12 15 18 column sum
// Printing Sum ->
// 12 15 18

#include <iostream>
using namespace std;
// to print column wise sum
// https://youtu.be/1CdolnvxLs0?list=PLDzeHZWIZsTryvtXdMr6rPh4IDexB5NIA
// watch from 32 min
void printColSum(int arr[][3], int row, int col)
{
    cout << "Printing Sum -> " << endl;
    for (int col = 0; col < 3; col++)
    {
        int sum = 0;
        for (int row = 0; row < 3; row++)
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
    printColSum(arr, 3, 3);
    return 0;
}