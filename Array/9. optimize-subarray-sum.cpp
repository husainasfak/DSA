// prefix sums approach;
// ! 1. Build Prefix sum array (additional array) using ps[i] = ps[i-1] + current element --- o(n)
// ! 2. instead of using brute force method print sum using ps[j] - ps[i-1] from prefix sum array 

#include<bits/stdc++.h>
using namespace std;


int prefixSumArrayMethod(int *arr, int sizeOfArray){
     // prefix sum computation
     int prefixArray[sizeOfArray] = {0};
     prefixArray[0] = arr[0];
     // ! loop will not start with i = 0 cause prefix[i-1] is -1;

     for(int i=1; i<sizeOfArray; i++){
          prefixArray[i] = prefixArray[i-1] + arr[i];
     }
     int LARGEST_SUM = 0;

     for(int i=0; i<sizeOfArray; i++){
          for(int j = i; j<sizeOfArray; j++){
               int subArraySum = i>0 ? prefixArray[j] - prefixArray[i-1]: prefixArray[j];

               LARGEST_SUM = max(LARGEST_SUM,subArraySum);


          }
     }
     
     return LARGEST_SUM;
}

int main(){
     int arr[] = {-2,3,4,-1,5,-12,6,1,3};
     int sizeOfArray = sizeof(arr)/sizeof(int);
     int sum = prefixSumArrayMethod(arr,sizeOfArray);
     cout <<sum;
}