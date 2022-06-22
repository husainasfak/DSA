/* 
Given an array of integers A (sorted) and a integer value.
implement a fun that take array A and Value and return the lower bound of value
note -  1. If value is not present in the array then the lower bound of the given integer means integer is just smaller than value present in array, otherwise value itself
note - 2. If value is less than all element present in the array in that case return -1

Example 
A = [1,2,3,4];
val = 4
Ans - 4
*/


#include<bits/stdc++.h>
using namespace std;



int lowerBound(vector<int> A, int val){
     int SIZE = A.size();
     int low = 0, high = (SIZE - 1);
     int answer = -1;
     int mid;

     while(low <= high){
          mid = (low + high)/2;

          if(A[mid] > val){
               high = mid - 1;
          }else{
               answer = mid+1;
               low = mid + 1;
          }
     }
     return answer;
}

int main(){
     vector<int> A = {1,1,2,3,3,5};
     int val = -1;
     int lower_bound = lowerBound(A,val);
     cout << "Lower Bound " << lower_bound;
     return 0;
}