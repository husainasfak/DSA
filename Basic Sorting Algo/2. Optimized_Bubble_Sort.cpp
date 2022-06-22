#include<bits/stdc++.h>
using namespace std;

void OptimizedBubbleSort(vector<int> &arr){
     int SIZE = arr.size();
     bool swapped;
     for(int times = 0; times < SIZE - 1; times++){
          swapped = false;
          for(int j = 1; j< SIZE - 1 - times; j++){
               if(arr[j] > arr[j+1]){
                    
                    swap(arr[j],arr[j+1]);
                    swapped = true;
               }
          }
          if(swapped == false){
               break;
          }
     }
}

int main(){
     vector<int> arr = {1,5,4,3,9,6,4,7,5};
     OptimizedBubbleSort(arr);

     for(auto element:arr){
          cout << element<<',';
     }

     return 0;
}

// in best case (either Ascending  order or Descending order)  O(n)
// worst case O(n2)
// no extra space