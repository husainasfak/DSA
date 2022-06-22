#include<bits/stdc++.h>
using namespace std;

void Counting_Sort(vector<int> &arr){
     int SIZE = arr.size();
     // find largest element to get Range
     int largestElement = 0;
     for(int i =0; i<SIZE; i++){
          largestElement = max(largestElement,arr[i]);
          
     }
     // count or frequency array

     // int *freq = new int[largest + 1];  dynamic array

     vector<int> freq(largestElement + 1, 0);

     for(int i=0; i<SIZE; i++){
          freq[arr[i]]++;
     }
     // put back the elements from freq arr to original arr

     int j = 0;
     for(int i =0; i<=largestElement; i++){
          while (freq[i]>0)
          {
               arr[j] = i;
               freq[i]--;
               j++;
          }
          
     }
     return;

}
int main(){
      vector<int> arr = {8,3,4,1,5,2,7,1,3};
     Counting_Sort(arr);
     for(auto element:arr){
          cout << element << ',';
     }
     return 0;
}

// make another array which count frequency of elements in the array 

// O(linear + Range)