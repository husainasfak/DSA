#include<bits/stdc++.h>
using namespace std;

void printArray(int arr[],int size){
     cout<<"size of array in this function "<<sizeof(arr) << endl; 
     // ! Array passed by reference so this would print size of address not actual array size (only address passed not actual array and both array share the common memory address)

     // ? good practice is that pass size of array along with actual array

     // ? int * arr or int arr[]

     for(int i =0; i<size; i++){
          cout << arr[i] << endl;
     }
}


int main(){
     int arr[] = {1,2,3,4,5,6};
     
     int sizeOfArray = sizeof(arr)/sizeof(int);

     cout <<"size of the array" << sizeOfArray << endl;

     printArray(arr,sizeOfArray);

     return 0;
}