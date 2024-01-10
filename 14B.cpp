// Find common element in 3 sorted array. {GFG}

#include <bits/stdc++.h>
using namespace std;
// https: // youtu.be/ilKK8bimP24

vector<int> commonElements(int A[], int B[], int C[], int n1, int n2, int n3)
{
    // code here.
    vector<int> ans;
    int i = 0, j = 0, k = 0;
    int store = 0;
    while (i < n1 && j < n2 && k < n3)
    {

        if (A[i] == B[j] && B[j] == C[k])
        {
            if (ans.size() == 0)
            {
                ans.push_back(A[i]);
            }
            else if (ans.back() != A[i])
            {
                ans.push_back(A[i]);
            }

            i++;
            j++;
            k++;
        }
        else if (A[i] < B[j])
        {
            i++;
        }
        else if (B[j] < C[k])
        {
            j++;
        }

        else
        {
            k++;
        }
    }
    return ans;
}
int main()
{
    int n1 = 6;
    int A[] = {1, 5, 10, 20, 40, 80};
    int n2 = 5;
    int B[] = {6, 7, 20, 80, 100};
    int n3 = 8;
    int C[] = {3, 4, 15, 20, 30, 70, 80, 120};
    vector<int> result = commonElements(A, B, C, n1, n2, n3);

    for (auto elem : result)
    {
        cout << elem << " ";
    }
    return 0;
}