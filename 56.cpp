// Print elements in sorted order using row-column wise sorted matrix   gfg
// Given an NxN matrix Mat. Sort all elements of the matrix.
// Example 1:
// Input:
// N=4
// Mat=[[10,20,30,40],
// [15,25,35,45]
// [27,29,37,48]
// [32,33,39,50]]
// Output:
// 10 15 20 25
// 27 29 30 32
// 33 35 37 39
// 40 45 48 50
// Explanation:
// Sorting the matrix gives this result.

// https://youtu.be/3KIaKQVJAUw
// Q56 in notes
// see directly from gfg

class Solution {
  public:
    vector<vector<int>> sortedMatrix(int N, vector<vector<int>> Mat) {
    
    vector<int>elements;
    
    for(int i=0;i<N;i++){
        for(int j=0;j<N;j++){
            elements.push_back(Mat[i][j]);
        }
    }
    
    sort(elements.begin(),elements.end());
    
    int curr = 0;
    
    for(int i=0;i<N;i++){
        for(int k=0;k<N;k++){
            Mat[i][k] = elements[curr];
            curr++;
        }
    }
    
    return Mat;
    }
};
