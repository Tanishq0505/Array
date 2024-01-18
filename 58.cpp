//  Common Elements Present In All Rows Of Matrix  gfg

// You are given a 2-D Matrix 'MAT' having 'N' rows and 'M' columns, respectively. Your task is to find all elements which are present in each row of the matrix.

// Note :1. The output array can contain the elements in any particular order.

// 2. Even if a particular element appears more than once in each matrix row, it should still be present only once in the output array.
// For Example :Consider the matrix MAT [ [ 2, 3, 4, 7 ] , [ 0, 0, 3, 5 ] , [ 1, 3, 8, 9 ] ] having 3 rows and 4 columns respectively.
// The output array should be [ 3 ] as 3 is the only element that is present in all three rows.

// https://youtu.be/ICsMRkIhsQQ
// Q58 in notes
// see directly from code studio

#include<bits/stdc++.h>
using namespace std;

vector<int> findCommonElements(vector<vector<int>> &mat)
{
    // Write your code here
    int n = mat.size();
	int m = mat[0].size();
	
    unordered_set<int>s;
    unordered_map<int,int>mp;
    
    for(int i=0;i<n;i++){
    	for(int j=0;j<m;j++){
    		s.insert(mat[i][j]);
    	}
    	
    	for(auto it:s){
    		mp[it]++;
    	}
    	
    	s.clear();
    }
    
    vector<int>ans;
    
    for(auto it:mp){
    	if(it.second==n){
    		ans.push_back(it.first);
    	}
    }
    
    return ans;
}
