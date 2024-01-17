// Find the median   gfg
// Given an array arr[] of N integers, calculate the median.
// NOTE: Return the floor value of the median.
// Example 1:
// Input: N = 5
// arr[] = 90 100 78 89 67
// Output: 89
// Explanation: After sorting the array
// middle element is the median

// Example 2:
// Input: N = 4
// arr[] = 56 67 30 79
// Output: 61
// Explanation: In case of even number of
// elements, average of two middle elements
// is the median.

// https://youtu.be/brx7iCBmH-A
// Q54 in notes
// see directly from gfg

class Solution
{
public:

	public:
		int find_median(vector<int> v)
		{
		    // Code here.
		     sort(v.begin(), v.end());
            int len = v.size();
            int median = 0;
            if(len % 2 == 0)
                median = (v[len/2] + v[(len/2) - 1]) / 2;
            else
                median = v[len/2];
            return median;
		}
};
