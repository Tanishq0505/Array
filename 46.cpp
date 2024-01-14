// Array Subset of another array
// Given two arrays: a1[0..n-1] of size n and a2[0..m-1] of size m. Task is to check
// whether a2[] is a subset of a1[] or not. Both the arrays can be sorted or unsorted.
// There can be duplicate elements.

// Example 1:
// Input:
// a1[] = {11, 7, 1, 13, 21, 3, 7, 3}
// a2[] = {11, 3, 7, 1, 7}
// Output:
// Yes
// Explanation:
// a2[] is a subset of a1[]
string isSubset(int a1[], int a2[], int n, int m) {
    
    // https://youtu.be/1HMUgPcqMh8?list=LL
// Q46 in notes

unordered_map<int,int>s;
    for(int i=0;i<n;i++)
    {
        // here we increase the value(frequency) of key by 1 if key repeats so value(frequency) become 2
        s[a1[i]]++;
    }
    for(int i=0;i<m;i++)
    {
         if(s.find(a2[i])==s.end())
        return "No";
// in video the  2nd array have all the elements distinct but here in this code there can be duplicate elements 
// in the 2nd array so we reduce the frequency of each element by 1 so we use else if and else condition
  else if(s[a2[i]]==0)
        return "No";
        else 
        s[a2[i]]--;
    }
      
    return "Yes";

}
