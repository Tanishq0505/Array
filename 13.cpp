// Find unique element in an array.
// Sample Input 1
// 2 3 1 6 3 6 2
// Sample Output 1:
// 1(As 1 come only one time in a given array so it is unique)

#include <iostream>
using namespace std;
// time span 16:43-26:15
// https://youtu.be/oVa8DfUDKTw?list=PLDzeHZWIZsTryvtXdMr6rPh4IDexB5NIA
int findUnique(int arr[], int size)
{
    int count = 0;
    for (int i = 0; i < size; i++)
    {
        count = 0;
        for (int j = 0; j < size; j++)
        {
            if (arr[i] == arr[j])
            {
                count++;
            }
        }
        if (count == 1)
        {
            return arr[i];
        }
    }
}
int main()
{
    int size = 7;
    int arr[7] = {2, 3, 1, 6, 3, 6, 2};
    int unique = findUnique(arr, 7);
    cout << "The Unique element of array is " << unique << endl;
}