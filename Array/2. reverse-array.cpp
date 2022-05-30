#include<bits/stdc++.h>
using namespace  std;

// iterative method
void reverseArray(int *arr, int sizeOfArray){
     int start = 0;
     int end = sizeOfArray - 1;

     while(start <= end){
          swap(arr[start],arr[end]);
          start += 1;
          end -=1;
     }
}

// Recursion Method
void reverseArrayRecursion(int arr[], int start, int end){
     
     if(start >= end){
          return ;
     }
     swap(arr[start],arr[end]);

     reverseArrayRecursion(arr,start+1,end-1);

}

int main() {
     

     int arr[] = {10,20,30,40,50,60,70,80,90,100};

     int sizeOfArray = sizeof(arr)/sizeof(int);

     int start = 0;
     int end = sizeOfArray -1;

     for(int i=0; i<sizeOfArray; i++){
          cout << arr[i] << " ";
     }
     cout <<endl;
     // reverseArray(arr,sizeOfArray);
     reverseArrayRecursion(arr, start, end);

     for(int i=0; i<sizeOfArray; i++){
          cout << arr[i] << " ";
     }

     return 0;
}