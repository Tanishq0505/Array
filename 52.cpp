// Minimum swaps and K together   gfg
// Given an array arr of n positive integers and a number k. One can apply a swap operation on the array any number of times, i.e choose any two index i and j (i < j) and swap arr[i] , arr[j] . Find the minimum number of swaps required to bring all the numbers less than or equal to k together, i.e. make them a contiguous subarray.
// Example 1:
// Input :
// arr[ ] = {2, 1, 5, 6, 3}
// K = 3
// Output :
// 1
// Explanation:
// To bring elements 2, 1, 3 together,
// swap index 2 with 4 (0-based indexing),
// i.e. element arr[2] = 5 with arr[4] = 3
// such that final array will be-
// arr[] = {2, 1, 3, 6, 5}

// https://youtu.be/PLu6uvp9l1k
// Q52 in notes
// see directly from gfg

class Solution
{
public:
    int minSwap(int arr[], int n, int k) {
        // Complet the function
        int fav=0,non_fav=0;  //fav=favourable elements 

         //ab array mai check kro fav elements jo less then k hai
     for(int i=0;i<n;i++){
         if(arr[i]<=k){
             fav++;
         }
     }
     //calculate no of swaps in first window
     for(int i=0;i<fav;i++){
         if(arr[i]>k){
             non_fav++;
         }  
     }
     //sliding window slide kro
    int i=0,j=fav;
    int res=non_fav;
    
    while(j<n){
        //array se ek non_fav element hata
        if(arr[i]>k){
            non_fav--;
        }
        //sliding window mai ek naya aaya jab vo shift hui
        if(arr[j]>k){
            non_fav++;
        }
        //ab compare kro ki pehle window ki swap ki size choti hai ya ab jo aage hai uski...
        res=min(res,non_fav);
        i++;
        j++;
    }
    return res;
    }
};
