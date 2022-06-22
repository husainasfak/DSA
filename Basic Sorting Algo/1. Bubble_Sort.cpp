// Key Idea -  Take larger element to the end by repeatedly swapping the adjacent elements;
/*
     n=5

     5 4 3 2 1    4 3 2 1     3 2 1     2 1        
     4 5 3 2 1    3 4 2 1     2 3 1     1 2
     4 3 5 2 1    3 2 4 1     2 1 3     4th time
     4 3 2 5 1    3 2 1 4     3rd time  0 to n-5
     4 3 2 1 5    2nd time    0 to n-4
     1st time     0 to n-3
     0 to n-2

      
*/
#include<bits/stdc++.h>
using namespace std;


void BubbleSort(vector<int> &arr){
     int SIZE = arr.size();

     for(int times=0; times< SIZE-1; times++){
          for(int j=0; j <= SIZE - 1 - times; j++){
               if(arr[j] > arr[j+1]){
                    swap(arr[j],arr[j+1]);
               }
          }
     }
}



int main(){
     // vector<int> arr = {4,2,1,3,6,5};
     vector<int> arr = {-2,3,4,3,-12,1,5,7};

     BubbleSort(arr);
     
     for(auto x:arr){
          cout << x << ",";
     }
     return 0;
}

// time complexity o(n2) everytime