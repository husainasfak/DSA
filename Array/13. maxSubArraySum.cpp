#include<bits/stdc++.h>
using namespace std;

maxSubArraySum(vector<int> arr){
      bool checkNegative =true;
          int maxInNegative=0;
     for(auto element : arr){
        if(element > 0 ) checkNegative = false;
        if(element > maxInNegative) maxInNegative = element;
    }
    if(checkNegative) return maxInNegative;

     int currentSum = 0;
     int maxSum = 0;

     for(auto element: arr){
          currentSum += element;
          if(currentSum < 0){
               currentSum = 0;
          }
          maxSum = max(maxSum,currentSum);
     }
     return maxSum;
}

int main(){
     vector<int> arr = {1,-2,3,4,4,-2};

     int max = maxSubArraySum(arr);
     cout << "max" << max;
}