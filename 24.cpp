// You are given two numbers 'A' and 'B' in the form of two arrays (A[] and B[]) of lengths 'N' and 'M' respectively, where each array element represents a digit.
// You need to find the sum of these two numbers and return this sum in the form of an array. 
// Explanation For Sample Input 1: 
// For the first test case, the integer represented by the first array is 1234 and the second array is 6, so the sum is 1234 + 6 = 1240. 
  // https://youtu.be/Z7_nMTHROZo?list=PLDzeHZWIZsTryvtXdMr6rPh4IDexB5NIA
#include <bits/stdc++.h> 

	// Write your code here.
	// https://youtu.be/Z7_nMTHROZo?list=PLDzeHZWIZsTryvtXdMr6rPh4IDexB5NIA
	vector<int>reverseArr(vector<int>v) {
		 int s=0; int e=v.size()-1;
		  while(s<e) { 
			      swap(v[s++],v[e--]);
}
 return v;  
  }  
vector<int> findArraySum(vector<int>&a, int n, vector<int>&b, int m) {
	 // Write your code here. 
int i=n-1,j=m-1;
 vector<int>ans;
  int carry=0; 
  while(i>=0 && j>=0) {  
	  int val1=a[i]; 
	   int val2=b[j];  
	   int sum=val1+val2+carry; 
	    carry=sum/10;   
		sum=sum%10; 
		 ans.push_back(sum); 
		  i--; 
		   j--; 
		   }
		    while(i>=0) {  
				int sum=a[i]+carry; 
				 carry=sum/10;  
				 sum=sum%10;
				   ans.push_back(sum);
				     i--;   }

       while (j >= 0) {  
		           int sum = b[j] + carry;   
				   
				    carry = sum / 10;       
					   sum = sum % 10;     
					        ans.push_back(sum);        
							  j--;        } 
							   while (carry!=0) {    
								   
								         int sum =  carry;  
										   carry = sum / 10;  
										           sum = sum % 10;     
												        ans.push_back(sum);                  }  

 return reverseArr(ans);   }
