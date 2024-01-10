// WAP a program using function to find max and min value in the array

#include <iostream>
using namespace std;

int getMin(int num[], int n)
{
    int min = num[0];
    for (int i = 1; i < n; i++)
    {

        if (num[i] < min)
        {
            min = num[i];
        }
    }

    // returning min value
    return min;
}

int getMax(int num[], int n)
{

    int max = num[0];
    for (int i = 1; i < n; i++)
    {

        if (num[i] > max)
        {
            max = num[i];
        }
    }

    // returning max value
    return max;
}

int main()
{

    int size;
    cin >> size;

    int num[100];

    // taking input in array
    for (int i = 0; i < size; i++)
    {
        cin >> num[i];
    }

    cout << " Maximum value is " << getMax(num, size) << endl;
    cout << " Minimum value is " << getMin(num, size) << endl;

    return 0;
}