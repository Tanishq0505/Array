// code studio Print Like A Wave
// For a given two-dimensional integer array/list 'ARR' of size (Nx M), print the 'ARR' in a sine wave order,
//  i.e., print the first column top to bottom, next column bottom to top, and so on. For eg:-
// The sine wave for the matrix:-
// 1 2
// 3 4
// will be[1, 3, 4, 2].
// Input -
// 1 2 3
// 4 5 6
// 7 8 9
// Output 1 4 7 8 5 2 3 6 9

#include <iostream>
using namespace std;
// https://youtu.be/1CdolnvxLs0?list=PLDzeHZWIZsTryvtXdMr6rPh4IDexB5NIA
// 37 min
void wavePrint(int arr[][3], int nRows, int mCols)
{

    for (int col = 0; col < mCols; col++)
    {

        if (col % 2 != 0)
        {
            // odd Index -> Bottom to top

            for (int row = nRows - 1; row >= 0; row--)
            {
                cout << arr[row][col] << " ";

                // ans.push_back(arr[row][col]);
            }
        }
        else
        {
            // 0 or even index -> top to bottom
            for (int row = 0; row < nRows; row++)
            {
                cout << arr[row][col] << " ";

                // ans.push_back(arr[row][col]);
            }
        }
    }
}
int main()
{
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
    wavePrint(arr, 3, 3);
    return 0;
}
