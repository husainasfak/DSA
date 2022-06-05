// Kadane's Algo for max subarray sum;
// maintain two variable 1. current sum 2. max sum
// if current sum goes negative simply take 0;
// Kadane's Algorithm requires at least one positive number

#include<bits/stdc++.h>
using namespace std;


int kadaneAlog(int *arr, int sizeOfArray){
         int CURRENT_SUM = 0;
          int MAX_SUM = 0;
     for(int i = 0; i < sizeOfArray; i++){
          CURRENT_SUM += arr[i];

          if(CURRENT_SUM < 0) {
               CURRENT_SUM = 0;
          }
          MAX_SUM = max(MAX_SUM,CURRENT_SUM);
          
         
     }
      return MAX_SUM;
}

int main(){
     int arr[] = {-2,3,4,-1,5,-12,6,1,3};
     int sizeOfArray = sizeof(arr)/sizeof(int);
     int sum = kadaneAlog(arr,sizeOfArray);
     cout <<sum;
}

// Time complexity O(n)
// Space complexity O(1)