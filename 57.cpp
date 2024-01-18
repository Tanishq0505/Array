// Rotate Image 48Leet code

// You are given an n x n 2D matrix representing an image, rotate the image by 90 degrees (clockwise).
// You have to rotate the image in-place, which means you have to modify the input 2D matrix directly. DO NOT allocate another 2D matrix and do the rotation.

// https://youtu.be/Z0R2u6gd3GU
// Q57 in notes
// see directly from leet code

class Solution {
public:

    void rotate(vector<vector<int>>& matrix) {
     int n = matrix.size();
        
        
        // transpose
        for(int i = 0; i < n-1; i++){
            for(int j = i+1; j < n; j++){
                swap(matrix[i][j], matrix[j][i]);
            }
        }     
         // row reverse code below
        int k;
        for(int i = 0; i < n; i++){
            k = n-1;
            for(int j = 0; j < k; j++){
                swap(matrix[i][j], matrix[i][k]);
                k--;
            }
        }
        
        // or row reverse code 
        
        // for(int i = 0; i<n; i++){
        //     reverse(matrix[i].begin(), matrix[i].end());
        // } 
    }
};
