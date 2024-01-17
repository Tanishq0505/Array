// Row with max 1s   gfg
// Given a boolean 2D array of n x m dimensions where each row is sorted. Find the 0-based index of the first row that has the maximum number of 1's.
// Example 1:
// Input:
// N = 4 , M = 4
// Arr[][] = {{0, 1, 1, 1},
//            {0, 0, 1, 1},
//            {1, 1, 1, 1},
//            {0, 0, 0, 0}}
// Output: 2
// Explanation: Row 2 contains 4 1's (0-based
// indexing).

// https://youtu.be/SCz-1TtYxDI
// Q55 IN NOTES 
// see directly from gfg and leet code 
class Solution{
public:

int lowerBound(vector<int> arr, int n, int x) {
    int low = 0, high = n - 1;
    int ans = n;

    while (low <= high) {
        int mid = (low + high) / 2;
        // maybe an answer
        if (arr[mid] >= x) {
            ans = mid;
            //look for smaller index on the left
            high = mid - 1;
        }
        else {
            low = mid + 1; // look on the right
        }
    }
    return ans;
}

	int rowWithMax1s(vector<vector<int> > arr, int n, int m) {
	    // code here
	      int cnt_max = 0;
    int index = -1;

    //traverse the rows:
    for (int i = 0; i < n; i++) {
        // get the number of 1's:
        int cnt_ones = m - lowerBound(arr[i], m, 1);
        if (cnt_ones > cnt_max) {
            cnt_max = cnt_ones;
            index = i;
        }
    }
    return index;
	}

};
