Check matrix is symmetric or not Code studio 
You are given a square matrix, return true if the matrix is symmetric otherwise return false.
A symmetric matrix is that matrix whose transpose is equal to the matrix itself.

See code directly from code studio 

#include <bits/stdc++.h> 
bool isMatrixSymmetric(vector<vector<int>> matrix){
    // Write your code here. 
      int i=0,j=0;
// https://youtu.be/14NEGKIzfno 
// see this video to understand
// Q38 in notes 
    int n=matrix.size();//this is used to calculate the row of given matrix
    int m=matrix.size();// this is used to calculate the column of given matrix 
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            if(matrix[i][j]!=matrix[j][i])

            {
                return false;
            }
        }
    }
    return true;
}
