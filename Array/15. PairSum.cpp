#include<bits/stdc++.h>
using namespace std;

struct PAIR {
      int num1;
      int num2;
};

// struct PAIR pairSum(vector<int> arr,int val){
//      // Complexity O(N2)
//     int SIZE = arr.size();
//      int sum = 0;
//      struct PAIR pairs;
//     for(int element:arr){
//      for(int i = 1; i<SIZE-1; i++){
//           int currentSum = element + arr[i];
//           if(currentSum <= val && currentSum > sum ){
//                sum = currentSum;
//                pairs.num1 = element;
//                pairs.num2 = arr[i];
//           }
//      }
//     }
//     return pairs;
// }

struct PAIR pairSum(vector<int> arr,int val){
     // Complexity O(N)
    int SIZE = arr.size();
     struct PAIR pairs;
     int low = 0, high = SIZE-1, diff = INT_MAX;
     while(high > low){
          if(abs(arr[low] + arr[high] - val) < diff){
               pairs.num1 = arr[low];
               pairs.num2 =  arr[high];
               diff = abs(arr[low]+arr[high] -val);
          }

          if(arr[low]+arr[high]>val){
               high--;
          }else{
               low++;
          }
     }
     return pairs;
}


int main(){
     vector<int> arr = {10,22,28,29,30,40};
     int val = 54;
     struct PAIR sum = pairSum(arr,val);
     cout << sum.num1 << endl;
     cout << sum.num2;
 
     return 0;
}
