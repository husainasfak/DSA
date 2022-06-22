// Repeatedly find the minimum element from unsorted part and putting it at the beginning
/*

*/
#include<bits/stdc++.h>
using namespace std;

Selection_Sort(vector<int> &arr){
     int SIZE = arr.size();
     for(int position = 0; position <= SIZE - 2; position++){
          int current = arr[position];
          int min_position = position;
          // to find out minimum element in array
          for(int j = position; j < SIZE; j++){   
               if(arr[j] < arr[min_position]){
                    min_position = j;
               }
          }
          swap(arr[min_position],arr[position]);
     }
}

int main(){
     vector<int> arr = {-2,3,4,-1,5,-12,6,1,3};
     Selection_Sort(arr);
     for(auto element:arr){
          cout << element << ',';
     }
     return 0;
}

