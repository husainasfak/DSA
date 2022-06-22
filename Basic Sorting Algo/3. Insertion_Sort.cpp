// Insertion sort is similar to playing cards in our hands. Insert the card in its correct position in a sorted part.
/* 
     5 4 1 3 2
     4 5 1 3 2
     1 4 5 3 2
     1 2 4 5 3
     1 2 3 4 5
*/



#include<bits/stdc++.h>
using namespace std;

void InsertionSort(vector<int> &arr){
     int SIZE = arr.size();
     for(int i = 1; i<SIZE; i++){
          int current = arr[i];
          int prev = i - 1;
          // this loop to find the right index where the current element should be inserted
          while(prev >= 0 && arr[prev] > current){
               arr[prev + 1] = arr[prev];
               prev = prev - 1; 
          }
          arr[prev + 1] = current;
     }
}

int main(){
     vector<int> arr = {2,4,1,3,8,7,5,6};
     InsertionSort(arr);
     for(auto element:arr){
          cout << element << ",";

     }
     return 0;
}


// O(n2) worst case
// best case (almost sorted elements)  O(n)
