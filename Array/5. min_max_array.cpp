// ? Linear Method for finding min max using structure

#include<bits/stdc++.h>
using namespace std;

struct  MIN_MAX
{
     int min;
     int max;
};


MIN_MAX get_min_max(int *arr, int sizeOfArray){
     struct MIN_MAX min_max;
     if (sizeOfArray == 1){
          min_max.min = arr[0];
          min_max.max = arr[0];
          return min_max;
     }
     // check for two elements
     if(arr[0] > arr[1]){
          min_max.min = arr[0];
          min_max.max = arr[1];
     }else{
          min_max.min = arr[1];
          min_max.max = arr[0];

     }

     // check for 3 and more elements

     for(int i = 2; i< sizeOfArray; i++){
          if(arr[i]>min_max.max){
               min_max.max = arr[i];
          }
          else if(arr[i] < min_max.min){
               min_max.min = arr[i];
          }
     }

         
     return min_max;
}

int main(){
     int arr[] = {-2,3,4,-1,5,-12,6,1,3};
     int sizeOfArray = sizeof(arr)/sizeof(int);
     struct MIN_MAX  min_max = get_min_max(arr,sizeOfArray);

     cout << "min" << min_max.min << endl;
     cout << "max" << min_max.max;
}


// time complexity --  O(n)
// space complexity  -- O(1)

// in best case (ascending order of element) (n-2 ) + 1 comparisions
//  in worst case (descending order of element) 2(n-2) +1 comparisions