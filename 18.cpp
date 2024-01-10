//  Given an array/list 'ARR' of integers and a position 'M'. You have to reverse the array after that position.
//  Example:

// We have an array ARR = {1, 2, 3, 4, 5, 6} and M = 3, considering based indexing so
//  the subarray (5, 6) will be reversed and our output array will be {1, 2, 3, 4, 6, 5}.
// (Code studio question)

#include <iostream>
using namespace std;
// https://youtu.be/MPvr-LmaZmA?list=PLDzeHZWIZsTryvtXdMr6rPh4IDexB5NIA

int main()
{
    int n;
    cout << "Enter the size of array " << endl;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cout << "Enter the elements of array ";
        cin >> a[i];
    }
    int m;
    cout << "Enter the position from which you have to start reverse " << endl;
    cin >> m;
    int s = m + 1;
    int e = n - 1;
    int t;
    while (s <= e)
    {
        t = a[s];
        a[s] = a[e];
        a[e] = t;
        s++;
        e--;
    }

    cout << "Printing the reverse array" << endl;
    for (int j = 0; j < n; j++)
    {
        cout << " " << a[j];
    }
    return 0;
}
