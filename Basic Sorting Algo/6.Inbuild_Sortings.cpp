#include<bits/stdc++.h>
using namespace std;


bool compare(int a, int b){
     return a < b;
}

int main(){
     int arr[] = {10,9,5,4,7,1,8,2,3,6};
     int n = sizeof(arr)/sizeof(int);

     // Ascending Order
     sort(arr, arr + n,compare); //passing fn as parameter
     // greater<int>()   inbuilt comparator

     // reverse(arr) revese the array

     for(auto element:arr){
          cout << element << ',';
     }

     return 0;
}