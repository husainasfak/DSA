#include<bits/stdc++.h>
using namespace std;

vector<int> k_rotate(vector<int> &arr, int times){
     // clockwise rotate
     vector<int> newArr;
     int SIZE = arr.size();
     times %= SIZE;

     for(int i=0; i<SIZE; i++){
          if(i<times){
               newArr.push_back(arr[SIZE + i - times]);
          }else{
               newArr.push_back(arr[i - times]);
          }
     }
     return newArr;
}

int main(){
     vector<int> arr = {1,3,5,7,9};
     int times = 2;
     vector<int> newArr = k_rotate(arr,times);

     for(int element:newArr){
          cout << element << ",";
     }

     return 0;
}