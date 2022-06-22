// ? Tournament or knockout Method for finding min max using structure

#include<bits/stdc++.h>
using namespace std;

struct  MIN_MAX
{
     int min;
     int max;
};


MIN_MAX get_min_max(int *arr, int low,int high){
     

     struct MIN_MAX min_max;
     
     // for single element array
     if(low == high) {
          min_max.min = arr[high];
          min_max.max = arr[high];
          return min_max;
     }

     // for two elements in the array
     if(high == low+1){
          if(arr[low] < arr[high]){
               min_max.min = arr[low];
               min_max.max = arr[high];
          }else{
               min_max.min = arr[high];
               min_max.max = arr[low];
          }
     }

     // for more than 2 elements in the array
     int mid = (low+ high)/2;
     struct MIN_MAX min_max_left = get_min_max(arr, low, mid);
     struct MIN_MAX min_max_right = get_min_max(arr, mid+1, high);

     if(min_max_left.min < min_max_right.min ){
          min_max.min = min_max_left.min;
     }else{
          min_max.min = min_max_right.min;
     }

     if(min_max_left.max < min_max_right.max){
          min_max.max = min_max_right.max;
     }else{
          min_max.max = min_max_left.max;
     }


     return min_max;

}

int main(){
     int arr[] = {-2,3,4,-1,5,-12,6,1,3};
     int sizeOfArray = sizeof(arr)/sizeof(int);
     struct MIN_MAX  min_max = get_min_max(arr,0,sizeOfArray);

     cout << "min" << min_max.min << endl;
     cout << "max" << min_max.max;
}


// time complexity --  O(n)
// space complexity  -- O(1)

// in best case (ascending order of element) (n-2) + 1 comparisions
//  in worst case (descending order of element) 2(n-2) + 1 comparisions