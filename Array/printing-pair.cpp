/*
     problem array[] = {1,2,3,4}
     pair (1,2) (2,3) (3,4)
          (1,2) (2,4)
          (1,3) 
*/

#include<bits/stdc++.h>
using namespace std;

void printAllPairs(int arr[], int sizeOfArray){
     for(int i = 0; i<sizeOfArray; i++){
          int element = arr[i];

          for(int j = i+1; j < sizeOfArray; j++){
               int pairedElement = arr[j];
               cout << "{" << element << "," << pairedElement << "}" << endl;
          }
          cout << endl;
     }
}


int main(){
     int arr[] = {1,2,3,4,5};
     int sizeOfArray = sizeof(arr)/sizeof(int);
     
     // for each loop
     for(int arrElemnet:arr){
          cout << arrElemnet << " ";
     }
     cout << endl;
     printAllPairs(arr,sizeOfArray);

     return 0;
}