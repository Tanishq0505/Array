// Searching in an array where adjacent differ by at most k gfg

// A step array is an array of integers where each element has a difference of at most k with its neighbor. Given a key x, we need to find the index value of x if multiple elements exist, and return the first occurrence of the key.

// Example 1:
// Input : arr[ ] = {4, 5, 6, 7, 6}, K = 1
//         and X = 6
// Output : 2
// Explanation:
// In an array arr 6 is present at index 2.
// So, return 2.

// https://youtu.be/u6qYLOV07aQ
// Q65 in array notes

int search(int arr[], int n, int x, int k)
// https://youtu.be/u6qYLOV07aQ
// Q65 in array notes 
{
    // Complete the function	
     int start = 0;

    while (start < n) {
      if (arr[start] == x) {
        return start;
      }

      int diff = abs(arr[start] - x) / k;
      diff = max(1, diff);

      start = start + diff;
    }

    return -1;
}    	
